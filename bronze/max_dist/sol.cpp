#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> xs(n);
  vector<int> ys(n);

  for (int i = 0; i < n; i++) {
    cin >> xs[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> ys[i];
  }
  
  long max_distance = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      long xdiff = (xs[i] - xs[j]) * (xs[i] - xs[j]);
      long ydiff = (ys[i] - ys[j]) * (ys[i] - ys[j]);
      long distance = xdiff + ydiff;

      if (distance > max_distance)
        max_distance = distance;
    }
  }

  cout << max_distance << endl;
}
