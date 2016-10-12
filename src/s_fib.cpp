/// Ref: https://oeis.org/A000045/b000045.txt

#include <iostream>

int fib(int num);

int main()
{
    int n;
    std::cout << "Informe um numero: ";
    std::cin >> n;
    std::cout << "Fibonacci de " << n << " = " << fib(n) << std::endl;
    return 0;
}

int fib(int num)
{
    int calc, i, fib[2] = { 1, 1 };
    for (i = 3; i <= num; ++i)
    {
        calc = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = calc;
    }
    return fib[1];
}
