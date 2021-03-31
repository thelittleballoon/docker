#!/usr/bin/env bash

docker run -it --mount source="$(pwd)",target=/home,type=bind os/ubuntu
