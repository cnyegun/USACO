#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
	int prev_br, befr_br;
	int prev_si, befr_si;
	int prev_go, befr_go;
	int prev_pl, befr_pl;

	cin >> prev_br >> befr_br;
	cin >> prev_si >> befr_si;
	cin >> prev_go >> befr_go;
	cin >> prev_pl >> befr_pl;

	int go_pl = befr_pl - prev_pl;
	int si_go = befr_go - prev_go + go_pl;
	int br_si = befr_si - prev_si + si_go;

	cout << br_si << '\n';
	cout << si_go << '\n';
	cout << go_pl << '\n';
}

