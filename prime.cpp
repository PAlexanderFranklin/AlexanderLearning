#include <cmath>

bool isPrime(int x) {
	if (x < 1)
		return false;
	if (x % 2 == 0)
		return x == 2;
	for (int i{ 3 }; i <= sqrt(x); i += 2) {
		if (x % i == 0)
			return false;
	}
	return true;
}