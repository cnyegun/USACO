#include <iostream>
using namespace std;

int main()
{
    int n;
    int x;
    bool check[200001] = {false};
    cin >> n;
    for(int i = 0; i < n - 1; ++i)
    {
        cin >> x;
        check[x] = {true};
    }
    for(int i = 1; i <= n; ++i)
    {
        if(check[i] == false)
        {
            cout << i << "\n";
        }
    }
    return 0;
}