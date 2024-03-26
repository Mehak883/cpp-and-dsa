// 4. Create a base class called shape. Use this class to store 2 double type values that could be used to compute the area of figures. 
// Derive 2 specific classes called triangle and rectangle from the base shape. Add to the base class a member function get_data() to 
// initialise base class data members and another member function display_area() to compute and display the area of figures. Make 
// display_area() as a virtual function and redefine this function in derived classes to suit their requirements. Using these 3 classes,
// design a program that will accept the dimensions of the shapes interactively and display area.
#include<iostream>
using namespace std;
class shape{
    protected:
int x,y;
public:
void getdata(int x,int y){
   this->x=x;
    this->y=y;
}
virtual void display_area(){
    cout<<"0";
}

};
class triangle:public shape{
void display_area(){
    cout<<"trinagle's area : "<<0.5*x*y<<endl;
}
};
class rectangle:public shape{
void display_area(){
    cout<<"rectangle's area : "<<x*y<<endl;
}
};
int main(){
    triangle t;
    shape *s,*s_r;
    s=&t;
    s->getdata(4,5);
    s->display_area();
    rectangle r;
    s_r=&r;
    s_r->getdata(5,4);
s_r->display_area();
    return 0;
}