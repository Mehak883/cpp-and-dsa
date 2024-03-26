// predefined to user defined
// user defined to pre defined

#include <iostream>
using namespace std;
class dollar;
class rupee
{
    float x;

public:
float getr(){return x;}
    rupee()
    {
        cout << "dc called" << endl;
    }
    rupee(float a)
    {
        x = a;
        cout << "pc called\n";
    }
    operator float()
    {
        cout << "float() called \n";
        return x;
    }
    void display()
    {
        cout << "rupee = " << x << endl;
    }
};
class dollar
{
    float x;

public:
    dollar()
    {
        cout << "dc called for dolaar" << endl;
    }
    dollar(rupee r){
        cout<<"dollar(r) for dollar\n";
        x=r.getr()/100.0;
    }
    dollar(float a)
    {
        x = a;
        cout << "pc called for dollar\n";
    }
    operator float()
    {
        cout << "int() called for dollar\n";
        return x;
    }
    operator rupee()
    {
        cout << "rupee() called for dollar" << endl;
        return x * 100;
    }
    void display_d()
    {
        cout << "dollar = " << x << endl;
    }
};
int main()
{
    float a = 60, y = 200, u;
    rupee r ;
    r= a;
    a = (float)r;
    cout<<a<<endl;
    r.display();
    // a = r;
    dollar d = (dollar)y;
    d.display_d();
    u = (float)d;
    cout << u;
    d.display_d();
    r = d;
    r.display();
    d=(dollar)r;
    d.display_d();
    return 0;
}