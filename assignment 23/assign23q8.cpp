// 8. Write a C++ program to swap values of two int variables without using third variable
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter 1st number : ";
    cin >> a;
    cout << "enter 2nd number : ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "****AFTER SWAPPING****";
    cout << "\nvalue of 1st number = " << a << "\nvalue of 2nd number = " << b;
    return 0;
}