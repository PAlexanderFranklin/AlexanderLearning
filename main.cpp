#include "io.h"
#include "prime.h"
#include <iostream>

int main() {
    int x{};
    int y{};
    x = readInteger();
    y = readInteger();
    std::cout << x << '+' << y << '=' << (x + y) << '\n';
    if (isPrime(x))
        std::cout << x << " Is prime" << '\n';
    if (isPrime(y))
        std::cout << y << " Is prime" << '\n';
    /*Enter double
    Enter operator
    Print math*/
    return 0;
}