// C++ Program to illustrate the use of Constructors in multilevel inheritance
#include <iostream>
using namespace std;
class first
{

public:
    first()
    {
        int a = 5, b = 3;
        cout << a - b << endl;
    }
};
class second : public first
{
public:
    second()
    {
        int a = 5, b = 2;
        cout << a + b << endl;
    }
};
class third : public second
{
public:
    third()
    {
        int a = 5, b = 2;
        cout << a * b << endl;
    }
};
int main()
{
    third t1;
    return 0;
}