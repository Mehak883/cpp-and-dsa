// 1. Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator
#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    friend istream &operator>>(istream &, complex &);
    friend ostream &operator<<(ostream &, complex &);
};

istream &operator>>(istream &ist, complex &c)
{
    cout << "enter real";
    cin >> c.real;
    cout << "enter img";
    cin >> c.img;
    return ist;
}
ostream &operator<<(ostream &ost, complex &c)
{
    cout << c.real;
    cout << " + i " << c.img<<endl;
    return ost;
}
int main()
{
    complex c1, c2;
    cin >> c1;
    cin >> c2;
    cout << c1;
    cout << c2;
    return 0;
}