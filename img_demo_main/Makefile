# 1. The docker command may require "sudo"
# 2. It may require docker login before running it.

account := ryojikamei
repository := casualchain
timestamp := $(shell date +%Y%m%d%H%M%S)

runcc:
	$(CC) -Os -static runcc.c -o runcc
	strip runcc

.PHONY: image
image: runcc
	docker build ./ -t casualchain:demo_$(timestamp) --no-cache

.PHONY: push
push: image
	docker tag casualchain:demo_$(timestamp) $(account)/$(repository):demo_$(timestamp)
	docker push $(account)/$(repository):demo_$(timestamp)
