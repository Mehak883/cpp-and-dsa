// 5. Write a C++ program to define a base class Item (item-no, name, price).Derive a class Discounted-Item (discount-percent). A 
//customer purchases 'n' items. Display the item-wise bill and total amount using appropriate format.
#include<iostream>
using namespace std;
class item{
int item_no;
char name[20];
int price;
public:
void setdata(){
    cin.ignore();
cout<<"enter item no : ";
cin>>item_no;
 cin.ignore();
cout<<"enter name : ";
cin.getline(name,15);
 cin.ignore();
cout<<"enter price : ";
cin>>price;
}
void display(){
    cout<<"\nitem no : "<<item_no;
    cout<<"\name : "<<name;
    cout<<"\nprice : "<<price;
}
int price_d(){
    return price;
}
};
class discounted_item:public item{
int discount_percent;
int actual_price;
public:
void setdata_d(){
cout<<"enter discount percent : ";
cin>>discount_percent;
}
 int dicount(){
actual_price=(price_d()*discount_percent)/100;
return actual_price;
 }
void display_d(){
cout<<"\ndiscount percent : "<<discount_percent;
cout<<"\ndiscount amount : "<<price_d()-dicount();
}
};
int main(){
discounted_item d1[2];
for(int i=0;i<2;i++){
cout<<"\nenter item : "<<i+1;
d1[i].setdata();
d1[i].setdata_d();
}    
for(int i=0;i<2;i++){
cout<<"\nitem : "<<i+1;
d1[i].display();
d1[i].display_d();
}    
int sum=0,total=0;
for(int i=0;i<2;i++){
sum=sum+d1[i].dicount();
}
for(int i=0;i<2;i++){
total=total+d1[i].price_d();
}

cout<<"\ntotal bil = "<<total - sum;    
    return 0;
}