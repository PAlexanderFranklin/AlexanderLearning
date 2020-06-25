#include "constants.h"
#include <iostream>

void dropBall(double ballHeight) {
	double time{};
	double velocity{};
	int printTimer{ 1 };
	while (true) {
		if (time > printTimer) {
			if (ballHeight > 0)
				std::cout << "after " << printTimer << " seconds, the ball has dropped to "
					<< ballHeight << " meters above the ground." << '\n';
			else {
				std::cout << "after " << printTimer << " seconds, the ball is on the ground."
					<< '\n';
				break;
			}
			++printTimer;
		}
		ballHeight = ballHeight - (velocity * timeStep);
		velocity = velocity + (gravity * timeStep);
		time = time + timeStep;
	}
}