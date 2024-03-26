// 10. Create a Distance class having 2 instance variable feet and inches. Also create default constructor and parameterized constructor
//  takes 2 variables . Now overload () function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
// inches = a+b+ 15.
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