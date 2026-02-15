#include <bits/stdc++.h>
using namespace std;


int main() {
  freopen("blocks.in", "r", stdin);
  freopen("blocks.out", "w", stdout);

  int n;
  cin >> n;

  vector<pair<string, string>> B(n);

  for (int i = 0; i < n; i++) {
    cin >> B[i].first >> B[i].second;
  }

  for (char c = 'a'; c <= 'z'; c++) {
    long total = 0;

    // loop through all the boards
    for (int i = 0; i < n; i++) {
      int count_front = 0;
      int count_back = 0;

      for (char &chr : B[i].first) {
        if (chr == c) count_front++;
      }

      for (char &chr : B[i].second) {
        if (chr == c) count_back++;
      }

      total += max(count_front, count_back);
    }

    cout << total << endl;
  }
}
