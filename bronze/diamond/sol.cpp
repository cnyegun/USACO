#include <bits/stdc++.h>
using namespace std;

int main () {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  freopen("diamond.in", "r", stdin);
  freopen("diamond.out", "w", stdout);

  int n, k;
  cin >> n >> k;

  vector<int> D (n);

  for (int i = 0; i < n; i++) {
    cin >> D[i];
  }

  sort(D.begin(), D.end()); 

  int ret = 0;
  int j = 0;

  for (int i = 0; i < n; i++) {
    // start searching : how many can I choose starting from this position
    while (j < n && D[j] - D[i] <= k) {
      j++;
    }
    ret = max(ret, j - i);
  }

  cout << ret << '\n';
  return 0;
}
