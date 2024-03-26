//4. Define a function to print Pascal Triangle up to N lines.
#include <iostream>
#include <math.h>
using namespace std ;
void combinations(int n, int r);
int main()
{
    int n, num, b;
    cout<<"enter the value of n : ";
    cin>>n;
    for (num = 0; num <= n; num++)
    {
        for (int l = 0; l <= num; l++)
        {
            combinations(num, l);
        }
        cout<<"\n";
    }
    return 0;
}
void combinations(int n, int r)
{
    int x, y, z, comb;
    int fact1 = 1, fact2 = 1, fact3 = 1;
    for (int i = 1; i <= n; i++)
    {
        fact1 = i * fact1;
    }
    x = fact1;
    for (int k = 1; k <= n - r; k++)
    {
        fact2 = k * fact2;
    }
    y = fact2;
    for (int m = 1; m <= r; m++)
    {
        fact3 = m * fact3;
    }
    z = fact3;
    comb = (x) / (y * z);
    cout<< comb<<" ";
}