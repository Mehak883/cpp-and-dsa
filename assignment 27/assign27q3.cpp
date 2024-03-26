// 3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.
#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    void set(int x, int y)
    {
        r = x;
        i = y;
    }
    void get()
    {
        cout << r << " + i" << i << endl;
    }
    friend complex operator+(complex x, complex y);
};
complex operator+(complex x, complex y)
{
    complex t;
    t.r = y.r + x.r;
    t.i = y.i + x.i;
    return t;
}
int main()
{
    complex c1, c2, c3;
    c1.set(3, 5);
    c2.set(6, 2);
    c1.get();
    c2.get();
    c3 = c1 + c2;
    c3.get();
    return 0;
}