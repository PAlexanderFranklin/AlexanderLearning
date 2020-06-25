#include "io.h"
#include "prime.h"
#include <iostream>

int readInteger() {
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;
	return x;
}

double readDouble() {
	double x{};
	std::cout << "Enter a double: ";
	std::cin >> x;
	return x;
}

void addUserIntegers() {
    int x{};
    int y{};
    x = readInteger();
    y = readInteger();
    std::cout << x << " + " << y << " = " << (x + y) << '\n';
    if (isPrime(x))
        std::cout << x << " Is prime" << '\n';
    if (isPrime(y))
        std::cout << y << " Is prime" << '\n';
}

void operateUserDoubles() {
    double x{};
    double y{};
    x = readDouble();
    char userOperator{};
    std::cout << "Enter an operator (+ - * or /): ";
    std::cin >> userOperator;
    y = readDouble();
    double result{};
    if (userOperator == '+')
        result = (x + y);
    if (userOperator == '-')
        result = (x - y);
    if (userOperator == '*')
        result = (x * y);
    if (userOperator == '/')
        result = (x / y);
    if (result)
        std::cout << x << ' ' << userOperator << ' ' << y << " = " << result << '\n';
}