//8. Define a class Rectangle and define an instance member function to find the area of the rectangle.
#include<iostream>
using namespace std;
class area{

int length,breadth;
public:
void set_data(){
cout<<"enter length and breadth : ";
cin>>length>>breadth;
}
int area_rectangle(){
int result;
result=length*breadth;
return result;
}
};
int main(){
    area a1;
    a1.set_data();
    int a;
    a=a1.area_rectangle();
    cout<<"area of the rectangle : "<<a;
    return 0;
}