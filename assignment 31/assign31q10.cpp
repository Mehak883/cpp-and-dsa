// 10. Consider two base classes
// worker(int code, char name, float salary),
// officer(float DA, HRA)
// class manger(float TA(is 10% of salary), gross salary) is derived from both base
// classes.
// Write necessary member functions.
#include<iostream>
using namespace std;
class worker{
    public:
int code;
char name[10];
float salary;
void setdata(){
    cout<<"code : ";
    cin>>code;
    fflush(stdin);
    cout<<"name : ";
    cin.getline(name,10);
    cout<<"salary : ";
    cin>>salary;
}
void getdata(){

  cout<<endl<<"code : "<<code<<endl;
    cout<<"\name : "<<name<<endl;
    cout<<"salary : "<<salary<<endl;
}
};
class officer{
public:
int da;
int hra;
void setdata1(){
    cout<<"hra : ";
    cin>>hra;
    cout<<"da : ";
cin>>da;
}
void getdata1(){
cout<<"hra : "<<hra<<endl;
cout<<"da : "<<da<<endl;
}
};
class manager:public worker,public officer{
float ta;
int gross_sal;
public:
int ta_(){
    ta=10;
    int ta_new=(salary*ta)/100;
    ta=ta_new;
    return ta_new;
}
int gross_sal_(){
    int gross_salary=da+hra+salary+ta;
    return gross_salary;
    }
} ;
int main(){
    manager m1;
    m1.setdata();
    m1.setdata1();
    m1.getdata();
    cout<<"\nTA :"<<m1.ta_();
  cout<<"\ngross salary : "<<m1.gross_sal_();
    return 0;
}