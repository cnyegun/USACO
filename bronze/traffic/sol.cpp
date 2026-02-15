#include <bits/stdc++.h>
using namespace std;

struct Traffic {
  string ramp;
  int lower;
  int upper;
};

void find_prior(const vector<Traffic> &T, int n);
void find_after(const vector<Traffic> &T, int n);

int main() {
  freopen("traffic.in", "r", stdin);
  freopen("traffic.out", "w", stdout);
  int n;
  cin >> n;
  vector<Traffic> T(n);

  for (auto& elem : T) {
    cin >> elem.ramp >> elem.lower >> elem.upper;
  }

  int lo = 0;
  int hi = 1000;

  for (int i = 0; i < n; i++) {
    if (T[i].ramp == "none") {
      lo = max(lo, T[i].lower);
      hi = min(hi, T[i].upper);
    }
    else if (T[i].ramp == "on") {
      lo += T[i].lower;
      hi += T[i].upper;
    }
    else {
      lo -= T[i].upper;
      hi -= T[i].lower;
    } 
  }

  int prior_lo = 0;
  int prior_hi = 1000;
  for (int i = n - 1; i >= 0; i--) {
    if (T[i].ramp == "none") {
      prior_lo = max(prior_lo, T[i].lower);
      prior_hi = min(prior_hi, T[i].upper);
    }
    else if (T[i].ramp == "off") {
      prior_lo += T[i].lower;
      prior_hi += T[i].upper;
    }
    else {
      prior_lo -= T[i].upper;
      prior_hi -= T[i].lower;
    } 
  }
  cout << max(0, prior_lo) << " " << prior_hi << endl;
  cout << max(0, lo) << " " << hi << endl;
}
