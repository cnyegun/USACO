#include <bits/stdc++.h>
using namespace std;

void print_signal(vector<char>& S, int width, int height);
void input_signal(vector<char>& S, int width, int height);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int height,width,scale;
    cin >> height >> width >> scale;

    vector<char> signal(width*height);

    input_signal(signal, width, height);
    //print_signal(signal, width, height);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < scale; j++) {
            for (int k = 0; k < width; k++) {
                for (int l = 0; l < scale; l++) {
                    cout << signal[i * width + k];
                }
            }
            cout << endl;
        }
    }

    return 0;
}

void input_signal(vector<char>& S, int width, int height) {
    for (int i = 0; i < height; i++) {
        string line;
        cin >> line;

        for (int j = 0; j < width; j++) {
            S[i * width + j] = line[j];
        }
    }
}

void print_signal(vector<char>& S, int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << S[i * width + j];
        }
        cout << endl;
    }
}
