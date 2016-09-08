//
// Ref: https://sites.google.com/a/liesenberg.biz/cjogos/home/materiais-de-apoio/topicos-relativos-a-c/recursao/serie-de-fibonacci
//

#include <iostream>

int main()
{
	long double num, calc, fib[2] = { 1, 1 };
	std::cout << "Informe um numero: ";
	std::cin >> num;
	for(int c = 3; c <= num; c++) {
		calc = fib[0] + fib[1];
		fib[0] = fib[1];
		fib[1] = calc;
	}
	std::cout << "Fibonacci: " << num << " = " << fib[1] << std::endl;
	return 0;
}
