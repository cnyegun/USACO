#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("cbarn.in", "r", stdin);
  freopen("cbarn.out", "w", stdout);
  
  int total_rooms; 
  cin >> total_rooms;
  vector<int> rooms(total_rooms);

  for (int i = 0; i < total_rooms; i++) {
    cin >> rooms[i];
  }

  long long ret = 100000000000;

  for (int i = 0; i < total_rooms; i++) {
    int total_steps = 0;
    for (int j = 0; j < total_rooms; j++) {
      int index = i + j;
      if (index >= total_rooms) index -= total_rooms;
      else if (index < 0) index += total_rooms;

      total_steps += rooms[index] * j;
    }
    // cout << total_steps << endl;
    if (total_steps < ret) ret = total_steps;
  }
  cout << ret << endl;
}

