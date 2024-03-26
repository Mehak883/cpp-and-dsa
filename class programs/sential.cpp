#include <iostream>
using namespace std;

int main()
{
    int a[10], i, n, j, m;
    cout << "enter the no of elements : ";
    cin >> n;
    cout << "\nenter an array : \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    for (i = n - 1; i > 0; i--)
    {
        for (j = n - 1; j > n - i; j--)
        {
            if (a[j] > a[j - 1])
            {
                m = a[j];
                a[j] = a[j - 1];
                a[j - 1] = m;
            }
        }
        cout << a[i] << " ";
    }
  
    return 0;
}