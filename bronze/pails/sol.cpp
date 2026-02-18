#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);

  int small, big, max;
  cin >> small >> big >> max;

  int r = 0;
  while (r < max) {
    r += small;
  }
  
  if (r > max) {
    r -= small;
  }

  // try to use the big bucket 
  int small_bucket_count = r / small;
  int rsf = r;

  for (int i = 1; i <= small_bucket_count; i++) {
    int r_bucket = r - small * i;
    while (r_bucket < max) {
      r_bucket += big;
    }
    if (r_bucket > max)
      r_bucket -= big;
      
    if (r_bucket > rsf && r_bucket <= max) {
      rsf = r_bucket;
    }
  }

  cout << rsf << endl;
}
