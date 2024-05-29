FROM node:lts-buster-slim

LABEL maintainer="Ryoji Kamei <ryoji.kamei@gmail.com>"
LABEL version="main"

RUN apt update && \
    apt install -y git libcurl4 psmisc && \
    git clone https://github.com/ryojikamei/CasualChain.git && \
    cd CasualChain && \
    npm install && \
    npm run build && \
    rm -rf coverage/ docs/ grpc/*.pb grpc/*.ts grpc/*.proto src/ .gitignore .git .npmignore \
    *.pdf config/*.csr config/*.crt config/*.pub config/*.key jest.config.ts \
    tsconfig.json typedoc.json *.md

COPY runcc /usr/local/bin/runcc

EXPOSE 8001
EXPOSE 8002
EXPOSE 9001
EXPOSE 9002

CMD [ "runcc" ]
