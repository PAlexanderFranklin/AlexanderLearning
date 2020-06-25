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