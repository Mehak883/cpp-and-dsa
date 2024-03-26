/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance 
member variables and also define instance member functions toset values for time and display values of time.*/
#include<iostream>
using namespace std;
class time{
int hours;
int seconds;
int minutes;
public:
void set_data(){
cout<<"enter hours , minutes and seconds : ";
cin>>hours>>minutes>>seconds;
}
void display(){
    cout<<hours<<" hr "<<minutes<<" min "<<seconds<<" sec";
}
};
int main(){
    time t1;
    t1.set_data();
    t1.display();
    return 0;
}