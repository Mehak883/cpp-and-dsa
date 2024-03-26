/*1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
return 0;
}*/
#include <iostream>
using namespace std;
class complex
{
    int x;

public:
    complex(){};
    complex(int x)
    {
        this->x = x;
    }
    operator int()
    {
        return x;
    }
};
int main()
{
    complex c1;
    int a = 4;
    c1 = a;
    cout << c1;
    return 0;
}