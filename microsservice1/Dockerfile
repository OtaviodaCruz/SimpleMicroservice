FROM ubuntu:bionic

LABEL version="1.0.0" description="Ubuntu bionic" maintainer="Otavio"

COPY microsservice_app /microsservice_app

RUN apt update
RUN apt install -y --no-install-recommends build-essential && cd microsservice_app && make && mv bin/main / && cd /

ENTRYPOINT ["/main"]