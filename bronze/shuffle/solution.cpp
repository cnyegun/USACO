#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int total_cows;
    cin >> total_cows;

    vector<int> order(total_cows);
    vector<long> ids(total_cows);
    vector<long> result(total_cows);

    for (int i = 0; i < total_cows; i++) cin >> order[i];
    for (int i = 0; i < total_cows; i++) cin >> ids[i];

    for (int i = 0; i < total_cows; i++) {
        result[i] = ids[order[i] - 1];
    }

    vector<long> temp = result;

    for (int i = 0; i < total_cows; i++) {
        result[i] = temp[order[i] - 1];
    }

    temp = result;

    for (int i = 0; i < total_cows; i++) {
        result[i] = temp[order[i] - 1];
    }

    for (int i = 0; i < total_cows; i++) cout << result[i] << endl;
}
