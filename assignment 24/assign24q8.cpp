// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include <iostream>
using namespace std;
float area(int rad)
{
    float a;
    a = 3.14 * rad * rad;
    return a;
}
int area(int len, int brd)
{
    int a;
    a = len * brd;
    return a;
}
float area(int brd, float hight)
{
    float a;
    a = 0.5 * brd * hight;
    return a;
}
int main()
{
    float r, h;
    int l, b;
    int choice;
    cout << "1. Area of circle \n2. Area of rectangle\n3. Area of triangle : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "enter radius : ";
        cin >> r;
        cout << "area of circle : " << area(r);
        break;

    case 2:
        cout << "enter length and breadth ";
        cin >> l >> b;
        cout << "area of rectangle : " << area(l, b);
        break;
    case 3:
        cout << "enter breadth and hight : ";
        cin >> b >> h;
        cout << "area of triangle : " << area(b, h);
        break;
    }
    return 0;
}
