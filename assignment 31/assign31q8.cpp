// 8 - In a bank, different customers have savings account. Some customers may have taken a loan from the bank. So bank always maintain 
// information about bank depositors and borrowers.Design a Base class Customer (name, phone-number). Derive a class 
// Depositor(accno, balance) from Customer. Again, derive a class Borrower (loan-no, loan-amt) from Depositor. Write necessary member
//  functions to read and display the details of ‘n’ customers.
#include<iostream>
using namespace std;
class customer{
string name;
string phn_no;
public:
void setdata1(){
    fflush(stdin);
cout<<"enter a name : ";
getline(cin,name);
fflush(stdin);
cout<<"enter phone_no : ";
getline(cin,phn_no);
}
void display1(){
cout<<"\nname : "<<name;
cout<<"\nphone number : "<<phn_no;
}
};
class depositors : public customer{
int accno;
int balance;
public:
void setdata2(){
cout<<"enter account number : ";
cin>>accno;
cout<<"enter balance :  ";
cin>>balance;
}
void display2(){
cout<<"\naccount number : "<<accno;
cout<<"\nbalance : "<<balance; 
}
};
class borrower:public depositors{
int loan_no;
int loan_amt;
public:
void setdata3(){
    cout<<"entwr loan no : ";
    cin>>loan_no;
cout<<"enter loan amount : ";
cin>>loan_amt;
}
void display(){
cout<<"\nloan no : "<<loan_no;
cout<<"\nloan amount : "<<loan_amt;
}
};
int main(){
 borrower b[2];
 for(int i=0;i<2;i++){
    b[i].setdata1();
    b[i].setdata2();
    b[i].setdata3();
 }   
  for(int i=0;i<2;i++){
    b[i].display1();
    b[i].display2();
    b[i].display();
 }   
    return 0;
}