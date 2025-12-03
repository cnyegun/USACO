#include <iostream>
using namespace std;

int main() {
	int n, x, y, z; 
	int count = 0;

	cin >> n;

	while (n != 0) {
		n--;

		cin >> x >> y >> z;
		if (x + y + z >= 2) {
			count++;
		}
	}

	cout << count;
}
