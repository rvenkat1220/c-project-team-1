FROM ubuntu:20.04

ADD . /code
WORKDIR /code

RUN addgroup -gid 900 deployer && \
useradd -u 900 -g deployer deployer
USER deployer

ENTRYPOINT ["./program_team"]
