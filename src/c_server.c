#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>

#define PORT 2000
#define BUFFER 4096

struct sockaddr_in host;
struct sockaddr_in net;

int main()
{
    int msocket, csocket, slen;
    unsigned int tm = sizeof(net);
    char buffer[BUFFER];

    if ((msocket = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(1);
    } else {
        printf("socket criado com sucesso.\n");
    }

    host.sin_family = AF_INET;
    host.sin_port = htons(PORT);
    memset(host.sin_zero, 0, sizeof(host.sin_zero));

    if (bind(msocket, (struct sockaddr *) &host, sizeof(host)) == -1) {
        perror("bind");
        exit(1);
    }

    listen(msocket, 1);

    if ((csocket = accept(msocket, (struct sockaddr *) &net, &tm)) == -1) {
        perror("accept");
        exit(1);
    }

    strcpy(buffer, "bem vindo.\n");

    if (send(csocket, buffer, strlen(buffer), 0)) {
        printf("aguardando resposta...\n");
        while (1) {
            memset(buffer, 0, BUFFER);
            if ((slen = recv(csocket, buffer, BUFFER, 0)) > 0) {
                buffer[slen - 1] = '\0';
                printf("Msg: %s\n", buffer);
                close(csocket);
                break;
            }
        }
    }
    close(msocket);
    printf("servidor encerrado.\n");
    return 0;
}
