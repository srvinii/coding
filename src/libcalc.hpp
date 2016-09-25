/**
 *  @author Iago Roger
 *  @file libcalc.hpp
 */

#ifndef LIBCALC_HPP_INCLUDED
#define LIBCALC_HPP_INCLUDED

void adicao(int n1, int n2)
{
    std::cout << "\nResultado: " << n1 + n2 << std::endl;
}

void subtracao(int n1, int n2)
{
    std::cout << "\nResultado: " << n1 - n2 << std::endl;
}

void multiplicacao(int n1, int n2)
{
    std::cout << "\nResultado: " << n1 * n2 << std::endl;
}

void divisao(float n1, float n2)
{
    std::cout << "\nResultado: " << n1 / n2 << std::endl;
}

#endif // LIBCALC_HPP_INCLUDED
