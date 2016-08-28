// Sequencia de fibonacci

#include <stdio.h>

int main()
{
	int n, calc = 0, fib[2] = { 0, 1 };
	printf("Informe um numero: ");
	scanf("%d", &n);
	for(int c = 0; c < n; c++) {
		calc = fib[1] + fib[0];
		fib[0] = fib[1];
		fib[1] = calc;
		printf("%d ", fib[0]);
	}
	return 0;
}
