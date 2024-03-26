//9. Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class area{
int radius;
public:
void set_data(){
cout<<"ente radius : ";
cin>>radius;
}
float area_circle(){
float result;
result=3.14*radius*radius;
return result;
}
};
int main(){
    area a1;
    a1.set_data();
 float a;
    a=a1.area_circle();
    cout<<"area of the circle : "<<a;
    return 0;
}