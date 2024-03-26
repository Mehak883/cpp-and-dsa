//7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.
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

int main()
{
    second s1;
    return 0;
}