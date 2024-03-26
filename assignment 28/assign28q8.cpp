// Create a Coordinate class for 3 variables x,y and z and overload comma operator such that when you write c3 = (c1 , c2 ) then c2 is
// assigned to c3. Where c1,c2,and c3 are objects of 3D coordinate class.
#include <iostream>
using namespace std;
class coordinate
{
    int *x, *y, *z;

public:
    coordinate()
    {
        x = new int;
        y = new int;
        z = new int;
    };
    coordinate(int a, int b, int c)
    {
        x = new int;
        y = new int;
        z = new int;
        *x = a;
        *y = b;
        *z = c;
    }
    void display()
    {
        cout << *x << " " << *y << " " << *z << endl;
    }
    coordinate operator,(coordinate c)
    {
        coordinate co;
        co.x = c.x;
        co.y = c.y;
        co.z = c.z;
        return co;
    }
};
int main()
{
    coordinate c1(4, 5, 6), c2(1, 2, 3), c3;
    c1.display();
    c3 = (c1, c2);
    c3.display();
    return 0;
}