#include <stdio.h>
#include <stdlib.h>

struct nascimento {
    int dia;
    int mes;
    int ano;
};

int main()
{
	struct nascimento dados;
    printf("Informe o dia: ");
    scanf("%d", &dados.dia);
    printf("Informe o mes: ");
    scanf("%d", &dados.mes);
    printf("Informe o ano: ");
    scanf("%d", &dados.ano);
    printf("Data de nascimento: %d-%d-%d\n", dados.dia, dados.mes, dados.ano);
    printf("Idade: %d\n", dados.ano - 2016);
    return 0;
}
