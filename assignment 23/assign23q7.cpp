// 7. Write a C++ program to calculate the square of a number
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, ans;
    cout << "enter a number : ";
    cin >> a;
    ans = pow(a, 2);
    cout << "square of " << a << " is " << ans;
    return 0;
}