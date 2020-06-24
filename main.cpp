#include "io.h"
#include "prime.h"
#include <iostream>

int main()
{
    int x{};
    int y{};
    x = readNumber();
    y = readNumber();
    printToConsole(x + y);
    if (isPrime(x))
        std::cout << x << " Is prime" << '\n';
    return 0;
}