FROM alpine:3.8 AS builder
WORKDIR /root
RUN   apk update && \
        apk add \
        cmake \
        g++ \
        gcc \
        make \
        libressl-dev \
        git \
        bash \
        automake \
        autoconf \
        linux-headers \
        libtool \
        build-base \
        musl-dev \
        python py-pip py-six \
        && rm -rf /var/cache/apk/* 
RUN pip install --upgrade pip
RUN pip install six 
# MQTT PAHO BUILD
RUN git clone -b v1.3.0 https://github.com/eclipse/paho.mqtt.c.git paho \
    && cd paho \
    && mkdir build \
    && cd build \
    && cmake -DCMAKE_BUILD_TYPE=Debug -DPAHO_WITH_SSL=TRUE -DPAHO_BUILD_DOCUMENTATION=FALSE -DPAHO_BUILD_SAMPLES=TRUE .. \
    && make && make install 
# Build OPC-UA
RUN  cd /root \
    && git clone -b v0.3.0 https://github.com/open62541/open62541.git open62541 \
    && cd /root/open62541 && mkdir build && cd /root/open62541/build \
    && cmake -DBUILD_SHARED_LIBS=ON -DUA_ENABLE_AMALGAMATION=ON .. \
    && make -j && make install 
COPY ext_modules /root/forte_ext/
# FORTE BUILD
RUN cd /root \
&& git clone -b 1.11.0 https://git.eclipse.org/r/4diac/org.eclipse.4diac.forte forte \
&& mkdir binPosix \
&& cd binPosix \
&& cmake -G "Unix Makefiles" \ 
-DCMAKE_BUILD_TYPE=Debug \
-DFORTE_COM_LOCAL=ON \
-DFORTE_TESTS=OFF \
-DFORTE_MODULE_CONVERT=ON \
-DFORTE_MODULE_UTILS=ON \
-DFORTE_ARCHITECTURE=Posix \
-DFORTE_EXTERNAL_MODULES_DIRECTORY=/root/forte_ext/ \
-DFORTE_MODULE_WATCHKEEPER=ON \
-DFORTE_COM_ETH=ON \
-DFORTE_MODULE_IEC61131=ON \
-DFORTE_COM_OPC_UA=ON \
-DFORTE_COM_OPC_UA_INCLUDE_DIR=/usr/local/include \
-DFORTE_COM_OPC_UA_LIB_DIR=/usr/local/lib \
-DFORTE_COM_OPC_UA_LIB=libopen62541.so \
# -DFORTE_COM_PAHOMQTT=ON \
# -DFORTE_COM_PAHOMQTT_INCLUDE_DIR=/usr/local/include \
# -DFORTE_COM_PAHOMQTT_INCLUDE_LIB=/usr/local/lib64 \
# -DFORTE_COM_PAHOMQTT_INCLUDE_LIB_DIR=/usr/local/lib64 \
# -DFORTE_COM_PAHOMQTT_LIB_DIR=/usr/local/lib64 \
# -DFORTE_COM_PAHOMQTT_LIB=libpaho-mqtt3a.so \
/root/forte \
&& make && make install \
# Copy Binary ready for deployment into a small container
&& mkdir /exe \
&& mkdir /exe/lib \
&& cp -a /usr/local/bin/forte /exe/forte \
&& cp -a /usr/local/lib64/lib* /exe/lib \
&& cp -a /usr/local/lib/lib* /exe/lib \
# Strip the binary
&& strip /exe/forte \
&& strip /exe/lib/*

FROM alpine:latest
     COPY --from=builder /exe/forte /usr/bin/forte
     COPY --from=builder /exe/lib/* /usr/lib/
     RUN apk add --no-cache libstdc++ libressl
     CMD ["/usr/bin/forte"]
