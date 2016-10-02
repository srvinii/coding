#include <iostream>

int main()
{
    int a, b;
    for (a = 1; a <= 10; ++a) {
        for (b = 1; b <= 10; ++b) {
            std::cout << a << " * " << b << " = " << a * b << std::endl;
        }
        std::cout << "\n";
    }
    return 0;
}
