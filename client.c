#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include <sys/socket.h>
#include <sys/types.h>
// #include <arpa/inet.h>
#include <netinet/in.h>

#define PORT 2000
#define LEN 4096

struct sockaddr_in local;
struct sockaddr_in remoto;

int main()
{
    int sk;
    int client;
    int len = sizeof(remoto);
    int slen;
    char buffer[4096];
    sk = socket(AF_INET, SOCK_STREAM, 0);
    if(sk == -1) {
        perror("[!] Erro.\n");
        exit(1);
    } else {
        printf("[*] Socket criado.\n");
    }

    local.sin_family = AF_INET;
    local.sin_port = htons(PORT);
    memset(local.sin_zero, 0x0, 8);
    if(bind(sk, (struct sockaddr*)&local, sizeof(local)) == -1) {
        perror("[!] Erro.\n");
        exit(1);
    }
    listen(sk, 1);
    if((client = accept(sk, (struct sockaddr*)&remoto, &len)) == -1) {
        perror("Accpet.\n");
        exit(1);
    }
    strcpy(buffer, "Bem vindo.\n");
    if(send(client, buffer, strlen(buffer), 0)) {
        printf("Aguardando resposta...\n");
        while(1) {
            memset(buffer, 0x0, LEN);
            if((slen = recv(client, buffer, LEN, 0)) > 0) {
                buffer[slen - 1] = '\0';
                printf("Msg: %s\n", buffer);
                close(client);
                break;
            }
        }
    }
    close(client);
    printf("Servidor encerrado.\n");
    return 0;
}
