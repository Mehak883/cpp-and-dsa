#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, j, temp;
    cout << "enter n: \n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\nentered elements are : \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    cout << "\nsorted list of elements : \n";
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j + 1] < a[j])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
     for (i = 0; i < n; i++)
     {
        cout << a[i]<<" ";
     }
    return 0;
}