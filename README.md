# CasualChain_Docker

This project is in alpha stage.

## What is CasualChain_Docker?
Utilities for creating docker images with CasualChain. The deliverables are actually pushed to Docker Hub.

## Create custom CasualChain images

### Setup docker
Here is an ubuntu 22.04 example.
```
$ sudo apt update
$ sudo apt install ca-certificates curl gnupg lsb-release
$ sudo mkdir -p /etc/apt/keyrings
$ curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /etc/apt/keyrings/docker.gpg
$  echo \
  "deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.gpg] https://download.docker.com/linux/ubuntu \
  $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
$ sudo apt update
$ sudo apt install docker-ce docker-ce-cli containerd.io docker-compose-plugin
```

### Make a image
```
$ cd img_demo_main
$ sudo make image
```