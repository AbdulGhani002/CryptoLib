FROM ubuntu:latest
LABEL authors="itsag"

ENTRYPOINT ["top", "-b"]