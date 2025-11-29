#include <iostream>
using namespace std;

int main() {
	// How many positive divisors does the number $24$ have?
	constexpr int n = 24;

	int total = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) total++;
	}

	cout << total << endl;

	return 0;
}
