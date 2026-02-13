#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int m, n;
    cin >> n >> m;

    vector<pair<int, int>> A;
    vector<pair<int, int>> B;

    for (int i = 0; i < n; i++) 
    {
        int len, speed_limit;
        cin >> len >> speed_limit;
        A.push_back({len, speed_limit});
    }

    for (int i = 0; i < m; i++) 
    {
        int len, actual_speed;
        cin >> len >> actual_speed;
        B.push_back({len, actual_speed});
    }

    int r = 0;
    int pos = 0;
    int a = 0;
    int b = 0;

    while (pos < 100) {
        int diff;
        
        if (A[a].first < B[b].first) {
            pos += A[a].first;
            B[b].first -= A[a].first;
            diff = B[b].second - A[a].second;
            a++;
        }

        else if (A[a].first > B[b].first) {
            pos += B[b].first;
            diff = B[b].second - A[a].second;
            A[a].first -= B[b].first;
            b++;
        }

        else {
            pos += B[b].first;
            diff = B[b].second - A[a].second;
            a++; b++;
        }

        r = diff > r ? diff : r;
    }
    
    cout << r << endl;
}
