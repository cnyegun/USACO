#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a;

	for (int i = 0; i < 100; i++) {
		a.push_back(rand() % 100);
	}

	for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
		cout << *it;
	}

	return 0;
}
