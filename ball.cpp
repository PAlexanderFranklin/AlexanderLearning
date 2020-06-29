#include "constants.h"
#include <iostream>

bool printHeight(int time, double height) { //returns true if ball is on ground.
	if (height > 0) {
		std::cout << "after " << time << " seconds, the ball has dropped to "
			<< height << " meters above the ground." << '\n';
		return false;
	}
	std::cout << "after " << time << " seconds, the ball is on the ground."
		<< '\n';
	return true;
}

void dropBall(double ballHeight) {
	double time{};
	double velocity{};
	int printTimer{ 1 };
	while (true) {
		if (time > printTimer) {
			if (printHeight(printTimer, ballHeight))
				break;
			++printTimer;
		}
		ballHeight -= (velocity * alexConst::timeStep);
		velocity += (alexConst::gravity * alexConst::timeStep);
		time += alexConst::timeStep;
	}
}