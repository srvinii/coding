#include <stdio.h>
#include <stdlib.h>

typedef struct Dados Dados;

struct Dados {
    int idade;
};

int main()
{
    Dados *d = malloc(sizeof(Dados));
    
    printf("Informe sua idade: ");
    scanf("%d", &d->idade);
    
    if (d->idade >= 18)
        printf("Maior de Idade\n");
    else
        printf("Menor de Idade\n");
    
    free(d);
    return 0;
}
