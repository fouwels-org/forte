# Compose
COMPOSE=docker-compose
BUILDFILE=build.yml
DOCKER=docker

# Config
build: Dockerfile
	$(COMPOSE) -f $(BUILDFILE) build
push:
	$(COMPOSE) -f $(BUILDFILE) push