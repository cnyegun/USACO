#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll k, n, w;
	cin >> k >> n >> w;

	ll p = (k * (w * (w + 1)) / 2 - n);
	cout << (p > 0 ? p : 0);
	
	return 0;
}
