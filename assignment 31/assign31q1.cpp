// 1. Define a class Person with instance members name and age. Also define member functions setName(), setAge(),getName(), getAge().Now
// define class Employee by inheriting Person class. In the Employee class define empid and salary as instance members. Also define
// setEmpid, setSalary, getEmpid, getSalary.
#include <iostream>
#include <cstring>
using namespace std;
class person
{
    int age;
    char name[10];

public:
    void setname(const char s[])
    {
        strcpy(name, s);
    }
    void getname()
    {
        cout << name << endl;
    }
    void setage(int a)
    {
        age = a;
    }
    void getage()
    {
        cout << age << endl;
    }
};
class employee : public person
{
    int salary, empid;

public:
    void setsalary(int sal)
    {
        salary = sal;
    }
    void setempid(int emp)
    {
        empid = emp;
    }
    void getsalary()
    {
        cout << salary << endl;
    }
    void getempid()
    {
        cout << empid << endl;
    }
};
int main()
{
    employee e1;
    e1.setname("mehak");
    e1.setage(51);
    e1.setsalary(40000);
    e1.setempid(1);
    e1.getname();
    e1.getage();
    e1.getsalary();
    e1.getempid();
    return 0;
}