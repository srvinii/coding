#include <iostream>

using namespace std;

int main()
{
	long double num, calc, fib[2] = { 0, 1 };
	cout << "Informe um numero: ";
	cin >> num;
	for(int c = 0; c < num; c++) {
		calc = fib[0] + fib[1];
		fib[0] = fib[1];
		fib[1] = calc;
	}
	cout << "Fibonacci: " << num << " = " << fib[0] << " ";
	return 0;
}