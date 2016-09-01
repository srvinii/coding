#include <stdio.h>

int main()
{
	int num, n1, calc, fib[2] = { 0, 1 };
	printf("Informe um valor: ");
	scanf("%d", &num);
	for(int c = 0; c < num; c++) {
		calc = fib[0] + fib[1];
		fib[0] = fib[1];
		fib[1] = calc;
		printf("%d ", fib[0]);
	}
	return 0;
}
