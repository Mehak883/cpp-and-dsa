// 9. Create a base class called volume. Use this class to store two double type values that could be used to
// compute the volume of figures. Derive two specific classes called cube and sphere from the base shape. Add to
// the base class, a member function get_data() to initialise base class data members and another member function
// display_volume() to compute and display the volume of figures. Make display_volume() as a virtual function
// and redefine this function in the derived classes to suit their requirements.
// Using these three classes, design a program that will accept dimensions of a cube or a sphere interactively,
// and display the volume.

#include <iostream>
#include <math.h>
using namespace std;
class volume
{
protected:
    float side, rad;

public:
    void get_data_c()
    {
        cout << "enter side : ";
        cin >> side;
    }
    void get_data_s()
    {
        cout << "enter radius : ";
        cin >> rad;
    }
    virtual void display() = 0;
};
class cube : public volume
{
    void display()
    {
        float ans = side * side * side;
        cout << "vol of cube is " << ans;
    }
};
class sphere : public volume
{
    void display()
    {
        cout << "vol of sphere is " << 1.334 * 3.14 * pow(rad, 3);
    }
};
int main()
{
    volume *v, *v1;
    sphere s;
    cube c;
    v = &s;
    v->get_data_s();
    v->display();
    v1 = &c;
    v1->get_data_c();
    v1->display();
    return 0;
}