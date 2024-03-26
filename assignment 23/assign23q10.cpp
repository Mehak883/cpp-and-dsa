// 10. Write a C++ program to add all the numbers of an array of size 10.
#include <iostream>
using namespace std;

int main()
{
    int a[10], i, sum = 0;
    cout << "enter 10 elements of an array\n";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "entered 10 elements are \n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
        sum = sum + a[i];
    }
    cout << "\nsum of all the nmber of an array is " << sum;
    return 0;
}