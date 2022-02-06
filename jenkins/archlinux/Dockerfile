FROM archlinux:base-20220130.0.46058

ADD . /code
WORKDIR /code

RUN groupadd -g 900 deployer && \
useradd -u 900 -g deployer deployer
USER deployer

ENTRYPOINT ["./program_team"]
