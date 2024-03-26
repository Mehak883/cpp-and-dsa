// 10. Create a base class called shape. Use this class to store two double type values that could be used to
// compute the area of figures. Derive two specific classes called square and parallelogram from the base shape. 
// Add to the base class, a member function get_data() to initialise base class data members and another member
// function display_area() to compute and display the area of figures. Make display_area() as a virtual function
// and redefine this function in the derived classes to suit their requirements.
// Using these three classes, design a program that will accept dimensions of square or a parallelogram 
// interactively, and display the area.
#include<iostream>
using namespace std;
class shape{
    protected:
double base,height;
public:
void getdata_p(){
    cout<<"enter base and hight ";
    cin>>base>>height;
}
void getdata_s(){
cout<<"enter side: ";
cin>>base;
}
virtual void display()=0;
};
class square:public shape{
public:
void display(){
cout<<"area of square : "<<base*base<<endl;
}
};
class paralleogram:public shape{
public:
void display(){
cout<<"area of parallelogram : "<<base*height<<endl;
}
};
int main(){
    shape *s1,*s2;
    square s;
    s1=&s;
    s1->getdata_s();
    s1->display();

    paralleogram p;
    s2=&p;
    s2->getdata_p();
    s2->display();
    return 0;
}
