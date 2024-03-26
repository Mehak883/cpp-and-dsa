// 4. Write a C++ program to design a base class Person (name, address, phone_no). Derive a class Employee (eno, ename) from Person.
// Derive a class Manager (designation, department name, basic-salary) from Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salary
#include <iostream>
using namespace std;
class person
{
    char name[10];
    char address[15];
    char phone_no[10];

public:
    void enter_data_p()
    {
        cin.ignore();
        cout << "enter a name : ";
        cin.getline(name, 10);
        fflush(stdin);
        cout << "enter your address : ";
        cin.getline(address, 15);
        fflush(stdin);
        cout << "enter your phone number ";
        cin.getline(phone_no, 10);
        fflush(stdin);
    }
    void dispay_p()
    {
        cout << "name : " << name;
        cout << "\nadd : " << address;
        cout << "\nphn _no : " << phone_no;
    }
};
class employee : public person
{
    int eno;
    char ename[10];

public:
    void enter_data_e()
    {
        cout << "enter employee id";
        cin >> eno;
        fflush(stdin);
        cout << "enter emplyee name";
        cin.getline(ename, 10);
        cin.ignore();
    }
    void display_e()
    {
        cout << "\nemp id : " << eno;
        cout << "\n emp name : " << ename;
    }
};
class manager : public employee
{
    char designation[15];
    char department[10];
    int basic_salary;
    static int sal;

public:
int flag=0;
manager(int i){
}
manager(){};
    void enter_data()
    {
        cout << "enter designation : ";
        cin.getline(designation, 10);
        fflush(stdin);
        cout << "enter department : ";
        cin.getline(department, 10);
        fflush(stdin);
        cout << "enter basic salary : ";
        cin >> basic_salary;
    }
    void display()
    {
        cout << "\ndes : " << designation;
        cout << "\ndeptt : " << department;
        cout << "\nsalary : " << basic_salary;
    }
int check()
    {
        int dummy;
        if (basic_salary > sal)
        {
            flag=1;
            sal = basic_salary;
            return flag;
        }
    return flag;
    }
};
int manager ::sal =0;
int main()
{
    int s;
    manager m1[2];
    manager m;
    for (int i = 0; i < 2; i++)
    {
        cout << "employee : " << i + 1 << endl;
        m1[i].enter_data_p();
        m1[i].enter_data_e();
        m1[i].enter_data();
        if(m1[i].check()!=0){
     s=i;
    }
    }
    m1[s].dispay_p();
    m1[s].display_e();
    m1[s].display();
    return 0;
}