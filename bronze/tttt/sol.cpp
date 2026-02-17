#include <bits/stdc++.h>
using namespace std;

bool check_iw(char *c, bool iwon[26]) {
  if (c[0] == c[1] && c[1] == c[2]) {
    iwon[c[0] - 'A'] = true;
    return true;
  }
  return false;
}

// returns true if at least two are the same
void check_tw(char *c, bool won[26][26]) {
  if (c[0] == c[1]) {
    won[c[0] - 'A'][c[2] - 'A'] = true;
    won[c[2] - 'A'][c[0] - 'A'] = true;
  } else if (c[1] == c[2]) {
    won[c[1] - 'A'][c[0] - 'A'] = true;
    won[c[0] - 'A'][c[1] - 'A'] = true;
  } else if (c[0] == c[2]) {
    won[c[1] - 'A'][c[2] - 'A'] = true;
    won[c[2] - 'A'][c[1] - 'A'] = true;
  }
}

int main() {
  freopen("tttt.in", "r", stdin);
  freopen("tttt.out", "w", stdout);

  char B[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> B[i][j];
    }
  }

  bool iwon[26] = {0};
  bool won[26][26] = {0}; 

  long iw = 0;
  long tw = 0;

  // check the rows
  for (int i = 0; i < 3; i++) {
    if (!check_iw(B[i], iwon)) {
      check_tw(B[i], won);
    }
  }

  // check the columns
  char buf[3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      buf[j] =  B[j][i];
    }

    if (!check_iw(buf, iwon)) {
      check_tw(buf, won);
    }
  }

  // check all the diagonals
  for (int i = 0; i < 3; i++) {
    buf[i] = B[i][i];
  }

  if (!check_iw(buf, iwon)) {
    check_tw(buf, won);
  }

  for (int i = 2; i >= 0; i--) {
    buf[i] = B[2 - i][i];
  }

  if (!check_iw(buf, iwon)) {
    check_tw(buf, won);
  }

  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < 26; j++) {
      tw += won[i][j];
    }
  }

  for (int i = 0; i < 26; i++) {
    iw += iwon[i];
  }

  cout << iw << endl << tw / 2 << endl;
}

