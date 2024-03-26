#include <iostream>
using namespace std;

int main()
{
    int a[8] = {23, 4, 1, 22, 10, 5, 11, 9};
    int n = 8, flag = 0,temp;
    for (int i = n - 1; i >= 0; i--)
    {
       flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                flag = 1;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    for(int i=0;i<8;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}