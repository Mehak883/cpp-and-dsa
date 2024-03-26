#include <iostream>
using namespace std;
class complex_no
{
    int real;
    int imaginary;

public:
    // complex_no(int x, int y){real = x;imaginary = y;}
    // complex_no(int x){real = x;imaginary = 0;}
   complex_no(){ real = 0;imaginary = 0;}
//    complex_no(complex_no &c){//c is like just another name of c1
// real=c.real;
// imaginary=c.imaginary;
//    }
   ~complex_no(){
    
   }
    void display()
    {
        cout << real << " + i" << imaginary << endl;
    }
    // void set_data(int x, int y)
    // {
    //     real = x;
    //     imaginary = y;
    // }
    // void add(complex_no x, complex_no y)
    // {

    //     real = x.real + y.real;
    //     imaginary = x.imaginary + y.imaginary;
    // }
    // complex_no add1(complex_no y)
    // {
    //     complex_no c(8, 10);
    //     c.real = real + y.real;
    //     c.imaginary = imaginary + y.imaginary;
    //     return c;
    // }
};
int main()
{
    //complex_no c1(4, 6), c2(1), c3, c4(7, 9);
    complex_no c3;
    //complex_no c5=c1;
    // c1.set_data(7, 3);
    // c2.set_data(3, 6);
    // c3.add(c1, c2);
    // c4 = c1.add1(c2);
    // c1.display();
    // c2.display();
    c3.display();
    // c4.display();
    // c5.display();
    return 0;
}