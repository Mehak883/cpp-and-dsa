// 5. Consider following class Numbers
// class Numbers
// {
// int x,y,z;
// public:
// // methods
// };
// Overload the operator unary minus (-) to negate the numbers.

#include <iostream>
using namespace std;
class number
{
    int x, y, z;

public:
    void set(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    number operator-()
    {
        number t;
        t.x = -x;
        t.y = -y;
        t.z = -z;
        return t;
    }
   
    void display()
    {
        cout << "\nx = " << x;
        cout << "\ny = " << y;
        cout << "\nz = " << z;
    }
};
int main()
{
    number n1, n2, n3, n4, n5;
    n1.set(4, 5, 6);
    n3 = -n1;
    n3.display();
    return 0;
}