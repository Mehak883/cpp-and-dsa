#include <iostream>
using namespace std;
class complex_no
{
    int real;
    int imaginary;

public:
    void display()
    {
        cout << real << " + i" << imaginary << endl;
    }
    void set_data(int x, int y)
    {
        real = x;
        imaginary = y;
    }
    void add(complex_no x,complex_no y){
        
        real=x.real+y.real;
        imaginary=x.imaginary+y.imaginary;
    
    }
   complex_no add1(complex_no y){
complex_no c;
c.real=real+y.real;
c.imaginary=imaginary +y.imaginary;
return c;
    }
};
int main()
{
    complex_no c1, c2, c3,c4;
    c1.set_data(7, 3);
    c2.set_data(3, 6);
        c3.add(c1,c2);
       c4= c1.add1(c2);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    return 0;
}