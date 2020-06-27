#include <bitset>
#include <iostream>

std::bitset<4> rotl(std::bitset<4> bits){
	return (bits << 1) | (bits >> 3);
}

void bits(){
	std::cout << "The following is a bit rotation function." << '\n';
	std::bitset<4> bits1{ 0b0001 };
	std::cout << bits1;
	std::cout << " rotated left = "<< rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << bits2;
	std::cout << " rotated left = " << rotl(bits2) << '\n';
}