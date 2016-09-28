/**
 *  @author Iago Roger
 *  @file main.cpp
 */

#include <iostream>
#include "libcalc.hpp"


int main()
{
    int n1, n2;
    char operacao;
    std::cout << "Informe o primeiro numero: ";
    std::cin >> n1;
    std::cout << "Informe o segundo numero: ";
    std::cin >> n2;
    std::cout << "Informe a operacao matematica\nEx: (+, -, *, /): ";
    std::cin >> operacao;
    switch (operacao)
    {
        case '+':
            std::cout << "\nResultado: " << adicao(n1, n2) << "\n\n";
            break;
        case '-':
            std::cout << "\nResultado: " << subtracao(n1, n2) << "\n\n";
            break;
        case '*':
            std::cout << "\nResultado: " << multiplicacao(n1, n2) << "\n\n";
            break;
        case '/':
            std::cout << "\nResultado: " << divisao(n1, n2) << "\n\n";
            break;
        default:
            std::cout << "Operacao invalida" << std::endl;
            break;
    }
    return 0;
}
