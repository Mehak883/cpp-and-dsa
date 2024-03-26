/*7. Define a class Box and write a program to enter length, breadth and height and initialise objects using constructor also  define
 member functions to calculate volume of the box.*/
#include <iostream>
using namespace std;
class box
{
    int length, breadth, height;

public:
    box(int x, int y, int z)
    {
        length = x;
        breadth = y;
        height = z;
    }
    int calculate()
    {
        int result;
        result = length * breadth * height;
        return result;
    }
    void display(int r)
    {
        cout << "volume of box : " << r;
    }
};
int main()
{
    int a;
    box b1(2, 5, 10);
    a = b1.calculate();
    b1.display(a);
    return 0;
}