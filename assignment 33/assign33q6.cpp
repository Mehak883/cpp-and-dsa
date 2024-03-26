// 6. Extend above to display the area of circles. For a circle,only one value is needed i.e. radius but in get_data() function 2 values 
// are passed.
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