#include <iostream>
using namespace std;
class distaance
{
    int feet;
    int inches;

public:
    distaance(){};
    distaance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    distaance operator()(int a, int b, int c)
    {
        distaance d;
        d.feet = a + c + 5;
        d.inches = a + b + 15;
        return d;
    }
    void display()
    {
        cout << "feet  = " << feet << "  inches = " << inches << endl;
    }
};
int main()
{
    distaance d1(5, 10);
    distaance d2;
    d1.display();
    d2 = d1(10, 20, 30);
    d1.display();
    d2.display();
    return 0;
}