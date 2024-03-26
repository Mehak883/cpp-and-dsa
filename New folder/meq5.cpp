#include<iostream>
using namespace std;
class student{
int roll_no;
char name[10];
char course[10];
public:
void setdata(){
cout<<"enter name : ";
fflush(stdin);
cin.getline(name,10);
cout<<"enter roll_no";
cin>>roll_no;
cout<<"enter course : ";
fflush(stdin);
cin.getline(course,10);
}
void show(){
cout<<"name : "<<name;
cout<<"\nrollno : "<<roll_no;
cout<<"\ncourse : "<<course;
}
};
class employee{
int emp_code;
int sal_per_hr;
public:
void setdata(){
    cout<<"\nenter emp code : ";
    cin>>emp_code;
    cout<<"\n enter salary per hour : ";
    cin>>sal_per_hr;    
}
int sal(){
    return sal_per_hr;
}
void show(){
cout<<"\nemp_code : "<<emp_code;
cout<<"\nsalary per hour :  "<<sal_per_hr;
}
};
class part_time_student:public student,public employee{
int hours_worked;
int salary;
public:
void calulate_sal(){
 cout<<"\nenter no of hours worked : ";   
 cin>>hours_worked;
 salary=hours_worked*sal();
 cout<<"\nsalary : "<<salary;
}

};
int main(){
    part_time_student p1;
    p1.student::setdata();
    p1.employee::setdata();
    p1.student::show();
    p1.employee::show();
    p1.calulate_sal();
    return 0;
}