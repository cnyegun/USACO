#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main() {
	srand(time(nullptr)); // generate a random seed;

	vector<int> a;

	for (int i = 0; i < 100; i++) {
		a.push_back(rand() % 100);
	}

	int sum = 0;

	for (auto number : a) {
		cout << number << " ";
		sum += number;
	}

	cout << endl;
	cout << "SUM: " << sum << endl;

	return 0;
}
