#include <iostream>

int main()
{
    int num, calc, fib[2] = { 1, 1 };
    std::cout << "Informe um valor: ";
    std::cin >> num;
    for (int contador = 3; contador <= num; ++contador) {
        calc = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = calc;
    }
    std::cout << "Fibonacci: " << fib[1] << std::endl;
    return 0;
}
