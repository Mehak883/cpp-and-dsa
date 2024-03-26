#include<iostream>
using namespace std;
class shape{   //you cant create an object of abstract class
    public:
    virtual void area()=0;  //pure virtual func
};
class rectangle : public shape{
    public:
void area(){
    cout<<"rectangle area called ";
}
};
class triangle : public shape{
    public:
    void area(){
cout<<"triangke area called "<<endl;
    }
};
class object:public rectangle,public triangle{

public:
void area(){
    rectangle :: area();
    triangle:: area();
}


};
int main(){
//  shape s;
triangle t;
t.area();
rectangle r;
r.area();
object o;
o.area();
    return 0;
}