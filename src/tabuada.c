#include <stdio.h>

int main()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(int c = 0; c <= 10; c++) {
		printf("%d * %d = %d\n", num, c, num * c);
	}
	return 0;
}
