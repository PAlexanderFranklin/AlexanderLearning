#include "ball.h"
#include "io.h"
#include <iostream>


int main() {
    addUserIntegers();
    operateUserDoubles();
    double towerHeight{};
    std::cout << "A ball is going to be dropped from a tower, "
        << "enter the tower's height in meters: ";
    std::cin >> towerHeight;
    dropBall(towerHeight);
    int discard{};
    std::cout << "Enter something to terminate program: ";
    std::cin >> discard;
    return 0;
}