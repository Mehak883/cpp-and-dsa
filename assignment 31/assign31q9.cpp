// 9. Write a C++ program to implement the following class hierarchy: 
// Student: id, name
// StudentExam (derived from Student): Marks of 6 subjects
// StudentResult (derived from StudentExam) : percentage
// Define appropriate functions to accept and display details.
// Create 'n' objects of the StudentResult class and display the marklist.

#include<iostream>
using namespace std;
class student{
int id;
string name;
public:
void setdata1(){
    cout<<"enter name : ";
    getline(cin,name);
    cout<<"enter id : ";
    cin>>id;
}
void getdata1(){
cout<<"name : "<<name;
cout<<"id : "<<id;
}
};
class studentexam : public student{
public:
int math,english,oops,ds,cn;
void setdata2(){
cout<<"enter maths english,oops,ds ,cn : ";
cin>>math>>english>>oops>>ds>>cn;
}
void getdata2(){
cout<<"\nmaths : "<<math<<"\nenglish  = "<<english<<"\noops = "<<oops<<"\nds = "<<ds<<"\ncn = "<<cn;
}

};
 class student_result: public student{
 int percentage;
 public: 
 int percentage_(studentexam se){
 percentage=se.math+se.cn+se.ds+se.english+se.oops;
 return percentage;
 }
};
int main(){
    studentexam s1;
    s1.setdata1();
    s1.setdata2();
    s1.getdata1();
    s1.getdata2();
    student_result sr;
    cout<<"percentage : "<< sr.percentage_(s1);
    
    return 0;
}