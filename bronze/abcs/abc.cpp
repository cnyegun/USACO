#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long arr[7];

	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + 7);

	long long abc = arr[6];
	long long a = arr[0];
	long long b = arr[1];
	long long c = abc - a - b;


	cout << a << " ";
	cout << b << " ";
	cout << c;

	return 0;
}
