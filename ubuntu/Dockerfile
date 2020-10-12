FROM ubuntu:latest

RUN apt-get update && apt-get install -y locales && rm -rf /var/lib/apt/lists/* \
    && localedef -i en_US -c -f UTF-8 -A /usr/share/locale/locale.alias en_US.UTF-8

RUN  apt update && apt install build-essential -y

RUN  apt update && apt install vim -y

#COPY "$HOME/.vimrc" "/root/"

ENV LANG en_US.utf8

WORKDIR /root
