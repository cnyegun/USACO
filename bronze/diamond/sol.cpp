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

  for (int i = 0; i < n; i++) {
    // start searching : how many can I choose starting from this position
    int _ret = 1;

    for (int j = i + 1; j < n; j++) {
      if (abs(D[i] - D[j]) <= k)
        _ret++;
    }

    if (_ret > ret)
      ret = _ret;
  }


  cout << ret << '\n';
  return 0;
}
