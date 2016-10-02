#include <iostream>

int main()
{
    int x, y;
    for (x = 1; x <= 10; ++x) {
        for (y = 1; y <= 10; ++y) {
            std::cout << x << " * " << y << " = " << x * y << std::endl;
        }
        std::cout << "\n";
    }
    std::cin.get(); // segura o cmd no windows
    return 0;
}
