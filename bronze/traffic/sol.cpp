#include <bits/stdc++.h>
using namespace std;

struct Traffic {
    string ramp;
    int lower;
    int upper;
};

int main() {
    freopen("traffic.in", "r", stdin);
    int n;
    cin >> n;
    vector<Traffic> T(n);
    
    for (auto& elem : T) {
        cin >> elem.ramp >> elem.lower >> elem.upper;
    }

    if (T[0].ramp == "none") {
        cout << T[0].lower << " " << T[0].upper << endl;
    }

    else if (T[0].ramp == "on") {
        cout << T[0].lower << " " << T[0].upper << endl;
    }

    for (int i = 0; i < n; i++) {

    }
}
