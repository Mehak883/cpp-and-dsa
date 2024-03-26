#include <iostream>
using namespace std;
class dollar
{
    int d;

public:
    dollar()
    {
        cout << "dc calld\n";
    };
    dollar(int x)
    {
        d = x;
        cout << "pc called\n";
    }
    operator int()
    {
        cout << "int() called\n";
        return d;
    }
    void display()
    {
        cout << d;
    }
};

int main()
{
    int x = 5;
    dollar d1 = x;
    x = d1;
    d1.display();
    return 0;
}