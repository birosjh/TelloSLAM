FROM gcc:13.2.0

RUN apt update && apt -y install cmake libspdlog-dev

WORKDIR /code