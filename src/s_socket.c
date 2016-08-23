/*
 *	Simples servidor socket em C
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>

#define PORT	2222
#define LISTEN	1
#define LEN		1024

struct sockaddr_in lhost;
struct sockaddr_in rhost;

int main(int argc, char *argv[])
{
	int msocket, csocket, slen, tm = sizeof(rhost);
	char buffer[1024];
	msocket = socket(AF_INET, SOCK_STREAM, 0);
	if(msocket == -1) {
		perror("socket");
		exit(1);
	} else {
		printf("socket criado com sucesso.\n");
	}

	lhost.sin_family	= AF_INET;
	lhost.sin_port		= htons(PORT);
	memset(lhost.sin_zero, 0x0, 8);

	if(bind(msocket, (struct sockaddr*)&lhost, sizeof(lhost)) == -1) {
		perror("bind");
		exit(1);
	}

	listen(msocket, LISTEN);

	if((csocket = accept(msocket, (struct sockaddr*)&rhost, &tm)) == -1) {
		perror("accept");
		exit(1);
	}

	strcpy(buffer, "conectado ao servidor\n\0");

	if(send(csocket, buffer, strlen(buffer), 0)) {
		printf("aguardando resposta do cliente.\n");
		while(1) {
			memset(buffer, 0x0, tm);
			if((slen = recv(csocket, buffer, LEN, 0)) > 0) {
				buffer[slen] = '\0';
				printf("Msg: %s", buffer);
				close(csocket);
				break;
			}
		}
	}
	close(msocket);
	printf("server down.\n");
	return 0;
}
