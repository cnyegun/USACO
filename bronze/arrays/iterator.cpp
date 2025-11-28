#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a;
	for (int i = 0; i < 100; i++) {
		a.push_back(rand() % 100);
	}

	for (int i = 0; i < 100; i++) {
		cout << a[i] << endl;
	}

	return 0;
}
