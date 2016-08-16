#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nascimento {
    int dia;
    int mes;
    int ano;
};

int main(void)
{
    struct nascimento dados;
    printf("Informe o dia: ");
    scanf("%d", &dados.dia);
    printf("Informe o mes: ");
    scanf("%d", &dados.mes);
    printf("Informe o ano: ");
    scanf("%d", &dados.ano);
    printf("Data de nascimento: %d-%d-%d\n", dados.dia, dados.mes, dados.ano);
    printf("Idade: %d", dados.ano - 2016);
}
