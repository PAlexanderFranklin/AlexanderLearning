#include <iostream>
#include <string>

void yearsPerLetter() {
	std::cout << "Enter your full name: ";
	std::string name{};
	std::getline(std::cin, name);
	std::cout << "Enter your age: ";
	double age{};
	std::cin >> age;
	std::cin.ignore(32767, '\n');
	std::cout << "You\'ve lived " << age/name.length() << " years for each letter in your name." << '\n';
}