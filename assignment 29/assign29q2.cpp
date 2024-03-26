/*2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}*/
#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    void setdata(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout << x << " " << y;
    }
    operator int()
    {
        return x;
    }
};
int main()
{
    complex c1;
    c1.setdata(3, 4);
    int a;
    a = c1;
    cout << c1;
    return 0;
}