#include <stdio.h>
#include <math.h>

int main()
{
    float calc, n1, n2;
    printf("Informe o numero base: ");
    scanf("%f", &n1);
    printf("Informe o expoente: ");
    scanf("%f", &n2);
    calc = pow(n1, n2);
    printf("%1.f elevado a %1.f = %1.f\n", n1, n2, calc);
    return 0;
}
