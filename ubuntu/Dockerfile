FROM ubuntu:latest

RUN apt-get update && apt-get install -y locales && rm -rf /var/lib/apt/lists/* \
    && localedef -i en_US -c -f UTF-8 -A /usr/share/locale/locale.alias en_US.UTF-8

RUN  apt update && apt-get install -y build-essential 

RUN  apt update && apt install -y vim

#RUN curl https://github.com/Kitware/CMake/releases/download/v3.19.0-rc1/cmake-3.19.0-rc1.tar.gz

#RUN  apt update && apt install -y cmake

#COPY "$HOME/.vimrc" "/root/"

ENV LANG en_US.utf8

WORKDIR /home
