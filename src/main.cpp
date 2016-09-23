//
// Ref: https://sites.google.com/a/liesenberg.biz/cjogos/home/materiais-de-apoio/topicos-relativos-a-c/recursao/serie-de-fibonacci
//

/// @file main.cpp

#include <iostream>

using namespace std;

int main()
{
	long double num, calc, fib[2] = { 1, 1 };
	cout << "Informe um numero: ";
	cin >> num;
	for (int c = 3; c <= num; c++) {
		calc = fib[0] + fib[1];
		fib[0] = fib[1];
		fib[1] = calc;
	}
	cout << "Fibonacci: " << num << " = " << fib[1] << endl;
	return 0;
}
