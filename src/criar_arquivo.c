#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("teste.txt", "w");
    if(arq == NULL) {
        printf("erro ao criar arquvio\n");
        exit(1);
    }
    fclose(arq);
    return 0;
}
