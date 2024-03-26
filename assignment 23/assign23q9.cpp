// 9. Write a C++ program to find the maximum of two numbers.
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter 1st number : ";
    cin >> a;
    cout << "enter 2nd number : ";
    cin >> b;
    if (a < b)
    {
        cout << "greater number is " << b;
    }
    else
    {
        cout << "greater number is " << a;
    }
    return 0;
}