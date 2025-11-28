#include <iostream>
using namespace std;

int main() {
	// How many positive integers less than 60 have an even number of positive divisors?
	constexpr int n = 60;

	int total = 0;

	for (int i = 2; i < 60; i++) {
		int divisors = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) divisors++;
		}
		if (divisors % 2 == 0) total++;
	}

	cout << total << endl;

	return 0;
}
