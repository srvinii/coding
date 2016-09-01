#include <stdio.h>

int main()
{
	int num, n1, n2, calc;
	n1 = 0;
	n2 = 1;
	calc = 0;
	printf("Informe um valor: ");
	scanf("%d", &num);
	for(int c = 0; c < num; c++) {
		calc = n1 + n2;
		n1 = n2;
		n2 = calc;
		printf("%d ", n1);
	}
	return 0;
}
