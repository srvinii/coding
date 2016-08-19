#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2;
    printf("Informe o numero base: ");
    scanf("%d", &n1);
    printf("Informe o expoente: ");
    scanf("%d", &n2);
    printf("%d elevado a %d = %1.f\n", n1, n2, (float)pow(n1, n2)); // casting
    return 0;
}