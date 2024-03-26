// Extend the above program to display the area of circles. This requires the addition ofa new derived class 'circle' that computes the 
// area of a circle. Remember, for a circle we need only one value, its radius, but the get_data() function in the base class requires
// two values to be passed.(Hint: Make the second argument of get_data() function as a default one with zero value.)
#include<iostream>
using namespace std;
class shape{
    protected:
int x,y;
public:
void getdata(int x,int y=0){
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
class circle:public shape{
void display_area(){
    cout<<"circle's area : "<<3.14*x*x<<endl;
}
};
int main(){
    triangle t;
    shape *s,*s_r,*s_c;
    s=&t;
    s->getdata(4,5);
    s->display_area();
    rectangle r;
    s_r=&r;
    s_r->getdata(5,4);
s_r->display_area();
circle c;
s_c=&c;
s_c->getdata(1);
s_c->display_area();
    return 0;
}