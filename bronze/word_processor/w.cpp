#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream fin("word.in");
	ofstream fout("word.out");

	int n, k;

	fin >> n >> k;


	string word;
	string line = "";
	int char_count = 0;

	for (int i = 0; i < n; i++ ) {
		fin >> word;
		if (line.empty()) {
			line = word;
			char_count = word.length();
		}
			
		else if (char_count + word.length() > k) {
			fout << line + '\n';
			line = word;
			char_count = word.length();
		} 

		else {
			line += ' ';
			line += word;
			char_count += word.length();
		}
	}
	fout << line << '\n';

	return 0;
}
