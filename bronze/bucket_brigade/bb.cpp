#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("buckets.in", "r", stdin);
	freopen("buckets.out", "w", stdout);

	int barn_i, barn_j, rock_i, rock_j, lake_i, lake_j;

	for (int i = 0; i < 10; i++) {
		string row;
		cin >> row;
		for (int j = 0; j < 10; j++) {
			if (row[j] == 'B') {
				barn_i = i;
				barn_j = j;
			}
			else if (row[j] == 'R') {
				rock_i = i;
				rock_j = j;
			}
			else if (row[j] == 'L') {
				lake_i = i;
				lake_j = j;
			}
		}
	}

	// initial distance
	int cows = abs(barn_i - lake_i) + abs(barn_j - lake_j) - 1;

	if (barn_i == lake_i && rock_i == barn_i
		&& ((barn_j < rock_j && rock_j < lake_j)
			|| (lake_j < rock_j && rock_j < barn_j))) 
	{
		cows += 2;
	}

	if (barn_j == lake_j && rock_j == barn_j
		&& ((barn_i < rock_i && rock_i < lake_i)
			|| (lake_i < rock_i && rock_i < barn_i))) 
	{
		cows += 2;
	}


	cout << cows << endl;
}
