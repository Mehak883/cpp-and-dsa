// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==
#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    void set(int a, int b)
    {
        r = a;
        i = b;
    }
    void get()
    {
        cout << r << " + i " << i << endl;
    }
    complex operator+(complex x)
    {
        complex temp;
        temp.r = r + x.r;
        temp.i = i + x.i;
        return temp;
    }
    complex operator-(complex x)
    {
        complex temp;
        temp.r = r - x.r;
        temp.i = i - x.i;
        return temp;
    }
    complex operator*(complex x)
    {
        complex temp;
        temp.r = r * x.r;
        temp.i = i * x.i;
        return temp;
    }
    void operator==(complex x)
    {
        complex temp;
        if (r == x.r)
        {
            cout << "equal";
        }
        else
        {
            cout << "not equal";
        } 
    }
};
int main()
{
    complex c1, c2, c3, c4, c5, c6;
    c1.set(1, 4);
    c2.set(3, 5);
    c1.get();
    c2.get();
    c3 = c1 + c2;
    c3.get();
    c4 = c1 - c2;
    c4.get();
    c5 = c1 * c2;
    c5.get();
    c1 == c2;
    return 0;
}