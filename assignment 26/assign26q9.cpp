// 9. Define a class Bill and define its member function get() to take detail of customer ,calculateBill() function to calculate 
//electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
#include<iostream>
using namespace std;
class bill{
int unit;
float total_bill;
char name[10];
char phn_no[10];
char address[20]; 
public:
bill(int x){
unit=x;
}
void get(){
    fflush(stdin);
    cout<<"enter name : ";
    cin.getline(name,10);
    fflush(stdin);
    cout<<"enter phone_number : ";
    cin.getline(phn_no,10);
    fflush(stdin);
    cout<<"enter address : ";
    cin.getline(address,15);
}
void put(){
cout<<name<<"\t"<<phn_no<<"\t"<<address;
}
void calculatebill(){
    if(unit<=100){
        total_bill=unit*1.20;
    }
    if(unit>100&&unit<=200){
        total_bill=unit*2;
    }
    if(unit>200){
        total_bill=unit*3;
    }
    cout<<"\nelectricity bill : "<<total_bill;
}
};
int main(){
    bill b1(150),b2(500);
    b1.get();
    b1.put();
    b1.calculatebill();
    b2.get();
    b2.put();
    b2.calculatebill();
    return 0;
}