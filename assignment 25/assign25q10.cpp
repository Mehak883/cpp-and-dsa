/*10. Define a class Area and define instance member functions to find the area of the different shapes like
 square, rectangle , circle etc.*/
 #include<iostream>
using namespace std;
class area{
int radius;
int length,side,breadth;
public:
void set_data_sq(){
    cout<<"\nenter side : ";
    cin>>side;
}
int area_square(){
int result;
result=side*side;
return result;
}
void set_data_rect(){
cout<<"enter length and breadth : ";
cin>>length>>breadth;
}
int area_rectangle(){
int result;
result=length*breadth;
return result;
}
void set_data_circle(){
cout<<"\nente radius : ";
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
    a1.set_data_rect();
    int a_r;
    a_r=a1.area_rectangle();
    cout<<"area of the rectangle : "<<a_r<<endl;
    a1.set_data_circle();
 float a_c;
    a_c=a1.area_circle();
    cout<<"area of the circle : "<<a_c<<endl;
    int a_s;
    a1.set_data_sq();
    a_s=a1.area_square();
     cout<<"area of the square : "<<a_s<<endl; 
    return 0;
}