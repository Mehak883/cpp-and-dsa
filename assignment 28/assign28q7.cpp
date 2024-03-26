// 7. Create an Integer class and overload logical not operator for that class.
#include <iostream>
using namespace std;
class integer
{
    int x;

public:
    integer(){};
    integer(int x)
    {
        this->x = x;
    }
    void display()
    {
        cout << x << endl;
    }
    void operator!=(integer i)
    {
        if (this->x != i.x)
        {
            cout << "\nnot equal";
        }
        else
        {
            cout << "\nequal";
        }
    }
};
int main()
{
    integer i1(3), i2(4);
    i1.display();
    i2.display();
    i1 != i2;
    return 0;
}