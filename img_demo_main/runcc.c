#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handler(int sig) {
    if (sig == SIGQUIT || sig == SIGINT || sig == SIGTERM) {
        system("/usr/bin/killall -15 node");
        exit(EXIT_SUCCESS);
    }
}

int main() {
    signal(SIGQUIT, handler);
    signal(SIGINT, handler);
    signal(SIGTERM, handler);

    system("npm run demo --prefix /CasualChain");

    return 0;
}
