#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dna;
    cin >> dna;
    long int max;
    long int count = 1;
    int string_length = dna.length();
    for(int i = 0; i < string_length; ++i)
    {
        if(dna[i] == dna[i + 1])
        {
            ++count;
        }
        else
        {
            if(count > max)
            {
                max = count;
            }
            count = 1;
        }
    }
    cout << max << "\n";
    return 0;
}