#include <bits/stdc++.h>
using namespace std;

struct Cow {
    int start;
    int end;
    int buckets;
};

int main () {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n;
    cin >> n;

    vector<Cow> C (n);
    for (int i = 0; i < n; i++) {
        cin >> C[i].start >> C[i].end >> C[i].buckets;
    }

    int max_buckets = 0;

    for (int time = 1; time <= 1000; time++) {
        int buckets_at_time_t = 0;

        for (int i = 0; i < n; i++) {
            if (C[i].start <= time && time <= C[i].end) {
                buckets_at_time_t += C[i].buckets;
            }
        }

        if (max_buckets < buckets_at_time_t)
            max_buckets = buckets_at_time_t;
    }

    cout << max_buckets << endl;
}
