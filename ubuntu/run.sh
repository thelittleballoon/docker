#!/usr/bin/env bash

docker run -it --mount source="$(dirname "$(pwd)")",target=/root,type=bind os/ubuntu
