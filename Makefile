.PHONY: build test clean prepare update docker

GO=CGO_ENABLED=0 GO111MODULE=on go

DOCKERS=docker_go
.PHONY: $(DOCKERS)

VERSION=$(shell cat ./VERSION)
GOFLAGS=-ldflags

docker: $(DOCKERS)

docker_go:
	docker build \
		-t registry2.lagoni.co.uk/docker_forte:$(VERSION) \
	 	.