#include <fstream>
using namespace std;

int calculate(int a1, int a2, int b1, int b2)
{
    int a[4] = {a1, a2, b1, b2};
    int biggest= a1;
    int smallest = a1;
    for(int i = 0; i < 4; i++)
    {
        if(a[i] > biggest)
        {
            biggest = a[i];
        }
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    return biggest - smallest;
}

int main()
{
    ifstream fin("paint.in");
    ofstream fout("paint.out");

    int a1, a2, b1, b2;
    fin >> a1 >> a2 >> b1 >> b2;
    
    if((b1 >= a1 && b1 <= a2) || (b2 >= a1 && b2 <= a2) || (a1 >= b1 && a1 <= b2)) 
    {
	fout << calculate(a1, a2, b1, b2); 
    }
    else
    {
        fout << a2 - a1 + b2 - b1;
    }

    return 0;    
}
