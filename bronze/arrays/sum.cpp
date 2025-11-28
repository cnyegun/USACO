#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 0; i < 100; i++) {
		int x;
		cin >> x;
		sum += x;
	}

	cout << "Total: " << sum << endl;

	return 0;
}
