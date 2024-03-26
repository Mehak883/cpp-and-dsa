#include <iostream>
using namespace std;

int main()
{
    int a[8] = {23, 4, 1, 22, 10, 5, 11, 9};
    int n = 8, flag = 0, min, t;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
     for(int i=0;i<8;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}