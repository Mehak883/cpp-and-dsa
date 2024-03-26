// 4. Write a C++ program to calculate the area of a circle
#include <iostream>
using namespace std;
int main()
{
    float pi = 3.14, area, r;
    cout << "enter radius of a circle : ";
    cin >> r;
    area = pi * r * r;
    cout << "area of a circle : " << area;
    return 0;
}