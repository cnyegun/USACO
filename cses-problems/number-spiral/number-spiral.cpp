#include <iostream>
using namespace std;

bool whichIsBigger(long long int y,long  long int x)
{
    return (y > x) ? true : false;
}

long long int calc(long long int y,long long int x)
{
    bool bigger = whichIsBigger(y, x);
    // ?bigger == true --> y is bigger than x
    // ?bigger == false --> y is smaller than x
    long long int big, small;
    if(bigger)
    {
        big = y;
        small = x;
    }
    else
    {
        small = y;
        big = x;
    }
    if(big % 2 == 0) // big is even 
    {
        if(bigger == 1)
        {
            return big*big - (big - 1) + (big - small);
        }
        else
        {
            return big*big  - (big - 1) - (big - small);
        } 
    }
    else // big is odd
    {
        if(bigger == 1)
        {
            return big*big - (big - 1) - (big - small);
        }
        else
        {
            return big*big - (big - 1) + (big - small);
        }
    }
} 

int main(void)
{
    long long int n;
    cin >> n;
    long long int y, x;
    for(long long int i = 0; i < n; ++i)
    {
        cin >> y;
        cin >> x;
        cout << calc(y, x) << "\n";
    }
    return 0;
}