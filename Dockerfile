# SPDX-FileCopyrightText: 2020 Belcan Advanced Solutions
# SPDX-FileCopyrightText: 2021 Kaelan Thijs Fouwels <kaelan.thijs@fouwels.com>
#
# SPDX-License-Identifier: Apache-2.0

FROM alpine:3.15.0 AS builder
RUN apk --no-cache add cmake g++ gcc make openssl-dev git bash automake autoconf linux-headers libtool build-base musl-dev python3 py3-pip py3-six
RUN pip3 install --upgrade pip
RUN pip3 install six 

WORKDIR /root

ENV VERSION_OPEN62541=1.0.6
ENV VERSION_FORTE=1.14.0

# Build OPC-UA
RUN wget -q -O open62541.tar.gz https://github.com/open62541/open62541/archive/refs/tags/v${VERSION_OPEN62541}.tar.gz && tar -xf open62541.tar.gz
RUN echo "299940025c14929533064abe0044d5805ea50d52b32d05ad9bc0e6996569c2a6  open62541.tar.gz" | sha256sum -c -
RUN cd open62541-${VERSION_OPEN62541} && mkdir -p build && cd build && cmake -DUA_ENABLE_AMALGAMATION=ON ..
RUN cd open62541-${VERSION_OPEN62541}/build && make -j && make install

# FORTE BUILD
COPY ext_modules forte_ext/
RUN wget -q -O forte.tar.gz https://git.eclipse.org/c/4diac/org.eclipse.4diac.forte.git/snapshot/org.eclipse.4diac.forte-${VERSION_FORTE}.tar.gz && tar -xf forte.tar.gz
RUN echo "90a885884faa0554e586309266ecf20530af53c328a6d1c5cb4e6a93225e5b97  forte.tar.gz" | sha256sum -c -
RUN cd org.eclipse.4diac.forte-${VERSION_FORTE} && mkdir bin && cd bin && cmake -G "Unix Makefiles" \ 
    -DCMAKE_BUILD_TYPE=Debug \
    -DFORTE_COM_LOCAL=ON \
    -DFORTE_MODULE_CONVERT=ON \
    -DFORTE_MODULE_UTILS=ON \
    -DFORTE_ARCHITECTURE=Posix \
    -DFORTE_EXTERNAL_MODULES_DIRECTORY=/root/forte_ext/ \
    -DFORTE_MODULE_WATCHKEEPER=ON \
    -DFORTE_COM_ETH=ON \
    -DFORTE_MODULE_IEC61131=ON \
    -DFORTE_COM_HTTP=ON \
    -DFORTE_COM_OPC_UA=ON \
    -DFORTE_COM_OPC_UA_INCLUDE_DIR=/usr/local/include \
    -DFORTE_COM_OPC_UA_LIB_DIR=/usr/local/lib \
    ..
RUN cd org.eclipse.4diac.forte-${VERSION_FORTE}/bin && make -j && make install 

RUN strip /usr/local/bin/forte

FROM alpine:3.15.0

RUN apk add --no-cache openssl-dev libgcc libstdc++

COPY --from=builder /usr/local/bin/forte /usr/local/bin/forte
COPY --from=builder /usr/local/lib/ /usr/local/lib/

EXPOSE 4840
EXPOSE 61499

ENTRYPOINT [ "/usr/local/bin/forte" ]
CMD ["-f", "/config/forte.fboot"]
