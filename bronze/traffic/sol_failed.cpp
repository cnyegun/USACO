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

  find_prior(T, n);

  find_after(T, n);  

}

void find_after(const vector<Traffic> &T, int n) {
  // lets find a none ramp
  for (int i = n - 1; i >= 0; i--) {
    // Case: not ramp -> skip
    if (T[i].ramp != "none") continue;

    assert(T[i].ramp == "none");

    int _lower = T[i].lower;
    int _upper = T[i].upper;

    // Case: single ramp
    if ((i - 1 >= 0 && T[i - 1].ramp != "none") || i == 0) {

      // work forward and we'll stop at T[n - 1]

      for (int j = i + 1; j < n; j++) {
        if (T[j].ramp == "on") {
          _lower += T[j].lower;
          _upper += T[j].upper;
        }
        else { 
          assert(T[j].ramp == "off");
          _lower -= T[j].upper;
          _upper -= T[j].lower;
        }
      }
      cout << _lower << " " << _upper << endl;
      break;
    }
    
    // Case: consecutive ramp -> go and normalize the range
    for (int j = i - 1; j >= 0; j--) {
      if (T[j].ramp != "none") break;
      if (T[j].lower > _lower) _lower = T[j].lower;
      if (T[j].upper < _upper) _upper = T[j].upper;
    }

    // work forward and we'll stop at T[n - 1]

    for (int j = i + 1; j < n; j++) {
      if (T[j].ramp == "on") {
        _lower += T[j].lower;
        _upper += T[j].upper;
      }
      else { 
        assert(T[j].ramp == "off");
        _lower -= T[j].upper;
        _upper -= T[j].lower;
      }
    }
    cout << _lower << " " << _upper << endl;
    break;
  }
}


void find_prior(const vector<Traffic> &T, int n) {
  // lets find a none ramp
  for (int i = 0; i < n; i++) {
    // Case: not ramp -> skip
    if (T[i].ramp != "none") continue;

    assert(T[i].ramp == "none");

    int _lower = T[i].lower;
    int _upper = T[i].upper;

    // Case: single ramp
    if ((i + 1 < n && T[i+1].ramp != "none") || i == n - 1) {

      // work backward and we'll stop at T[0]

      for (int j = i - 1; j >= 0; j--) {
        if (T[j].ramp == "on") {
          _lower -= T[j].upper;
          _upper -= T[j].lower;
        }
        else { 
          assert(T[j].ramp == "off");
          _lower += T[j].lower;
          _upper += T[j].upper;
        }
      }
      cout << _lower << " " << _upper << endl;
      break;
    }
    
    // Case: consecutive ramp -> go and normalize the range
    for (int j = i; j < n; j++) {
      if (T[j].ramp != "none") break;
      if (T[j].lower > _lower) _lower = T[j].lower;
      if (T[j].upper < _upper) _upper = T[j].upper;
    }
    
    cout << "after normalize: " << _lower << " " << _upper << endl;

    for (int j = i - 1; j >= 0; j--) {
      if (T[j].ramp == "on") {
        _lower -= T[j].upper;
        _upper -= T[j].lower;
      }
      else { 
        assert(T[j].ramp == "off");
        _lower += T[j].lower;
        _upper += T[j].upper;
      }
    }
    cout << _lower << " " << _upper << endl;
    break;
  }
}
