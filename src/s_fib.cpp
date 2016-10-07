#include <iostream>

using namespace std;

int fib(int num);

int main()
{
	int n;
	cout << "Informe um numero: ";
	cin >> n;
	cout << "Fibonacci de " << n << " = " << fib(n);
	return 0;
}

int fib(int num)
{
	int calc, c, fib[2] = { 1, 1 };
	for (c = 3; c <= num; ++c) {
		calc = fib[0] + fib[1];
		fib[0] = fib[1];
		fib[1] = calc;
	}
	return fib[1];
}
