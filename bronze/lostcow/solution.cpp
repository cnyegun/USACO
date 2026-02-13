#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int start, cow;

    cin >> start >> cow;

    int pos = start;
    int m = 1;
    int distance = 0;

    while (1) {
        if (start <= cow && cow <= pos) {
            distance -= pos - cow;
            break;
        }
        if (start >= cow && cow >= pos) {
            distance -= cow - pos;
            break;
        }

        distance += abs(pos - start) + abs(m);
        pos = start + m;
        m *= -2;
    }

    cout << distance << endl;
}
