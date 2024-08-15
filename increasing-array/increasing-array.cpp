#include <iostream>
using namespace std;

int main()
{
    long long int arr[200000];
    long long int n;
    long int count = 0;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; ++i)
    {
        if(arr[i] > arr[i + 1])
        {
            count += arr[i] - arr[i + 1];
            arr[i + 1] = arr[i]; 
        }
    }
    cout << count << "\n";
    return 0;
}