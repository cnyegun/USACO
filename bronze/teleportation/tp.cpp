#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);

	int a, b, x, y;
	cin >> a >> b >> x >> y;

	int d = abs(a - b);
	int d1 = abs(a - x) + abs(b - y);
	int d2 = abs(a - y) + abs(b - x);

	cout << min({d, d1, d2}) << '\n';
	return 0;
}
