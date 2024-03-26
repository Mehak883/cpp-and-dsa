// 7. Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// Public:
// fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.
#include <iostream>
using namespace std;
class fraction
{
    long numerator;
    long denominator;

public:
    fraction(long n = 0, long d = 0)
    {
        numerator = n;
        denominator = d;
    }
    friend istream &operator>>(istream &x, fraction &y);
    fraction operator++()
    {
        fraction t;
        t.numerator = ++numerator;
        t.denominator = ++denominator;
        return t;
    }
    fraction operator++(int u)
    {
        fraction t;
        t.numerator = numerator++;
        t.denominator = denominator++;
        return t;
    }

    friend ostream &operator<<(ostream &x, fraction &y);
};
ostream &operator<<(ostream &x, fraction &y)
{
    cout << y.numerator << "/" << y.denominator << endl;
    return x;
}
istream &operator>>(istream &x, fraction &y)
{
    cout<< "numerator : ";
    cin >> y.numerator;
    cout << "denominator : ";
    cin >> y.denominator;
    return x;
}
int main()
{
    fraction f, f1, f2;
    cout << f1;
    cout << f2;
    cout << "enter 1st fraction : \n";
    cin>>f1;
    cout << "\n++f1   :   ";
    ++f1;
    cout << f1;
    cout << "\nf1++   :   ";
    f1++;
    cout<<f1;
    cout << "\nf2 = ++f1\nf2 = ";
    f2 = ++f1;
    cout << f2 << "\nf1 = " << f1;
    f2 = f1++;
    cout << "\n f2 = f1++\nf1 = ";
    cout << f1;
    cout << "\nf2 = ";
    cout << f2;
    return 0;
}