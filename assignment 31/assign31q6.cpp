// 6. Write a C++ program to demonstrate how a common friend function can be used to exchange the private values of two classes.
// (Use call by reference method).
#include <iostream>
using namespace std;
class second;
class first
{
    int a, b;

public:
    friend void first_second(first &, second &);
    first(){};
    first(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a : " << a;
        cout << "\nb : " << b;
    }
};
class second
{
    int x, y;

public:
    second(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void display_s()
    {
        cout << "\nx : " << x;
        cout << "\ny : " << y;
    }
    friend void first_second(first &, second &);
};
void first_second(first &f, second &s)
{
    int temp;
    temp = f.a;
    f.a = s.x;
    s.x = temp;
    temp = f.b;
    f.b = s.y;
    s.y = temp;
}
int main()
{
    first f1(3, 4);
    second s1(5, 6);
    f1.display();
    s1.display_s();
    first_second(f1, s1);
    f1.display();
    s1.display_s();
    return 0;
}