#include <iostream>

int readNumber()
{
	int x{};
	std::cout << "Enter a number: ";
	std::cin >> x;
	return x;
}

void printToConsole(int x)
{
	std::cout << x << '\n';
}