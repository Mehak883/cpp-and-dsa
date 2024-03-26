// 5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>
using namespace std;
int main()
{
    float volume, l, b, h;
    cout << "enter length of a cuboid : ";
    cin >> l;
    cout << "enter breadth of a cuboid : ";
    cin >> b;
    cout << "enter hight of a cuboid : ";
    cin >> h;
    volume = l * b * h;
    cout << "volume of a cuboid : " << volume;
    return 0;
}