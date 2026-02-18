#include <bits/stdc++.h>
using namespace std;

struct Turn {
  int a;
  int b;
  int g;
};

void swap(int arr[3], int a, int b) {
  int _a = a - 1;
  int _b = b - 1;

  int temp = arr[_a];
  arr[_a] = arr[_b];
  arr[_b] = temp;
}

int main() {
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);


  int n;
  cin >> n;
  
  vector<Turn> A (n);
  int game[] = {1, 2, 3};

  for (int i = 0; i < n; i++) {
    cin >> A[i].a >> A[i].b >> A[i].g;
  }

  int points[] = {0, 0, 0};

  for (int i = 0; i < n; i++) {
    swap(game, A[i].a, A[i].b);
    if (game[A[i].g - 1] == 1)
      points[0]++;
    if (game[A[i].g - 1] == 2)
      points[1]++;
    if (game[A[i].g - 1] == 3)
      points[2]++;
  }

  cout << max(points[0], max(points[1], points[2])) << endl;
}
