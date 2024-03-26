// 7. Write class declarations and member function definitions for a C++ base class to represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and Parttime (number of working hours, hourly rate, salary).
// Write a menu driven program to:
// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees.
// 3. Search a given Employee by emp-code.

// #include <iostream>
// using namespace std;
// class employee
// {
//     int emp_id;
//     string name;

// public:
//     void setdata()
//     {
//         cout << "enter emp id : ";
//         cin >> emp_id;
//         cout << "enter emp name : ";
//         fflush(stdin);
//         getline(cin, name);
//     }
//     void display()
//     {
//         cout << "\nname : " << name;
//         cout << "\nemployee id : " << emp_id;
//     }
// };
// class fulltime : public employee
// {
//     int daily_rate;
//     int days;
//     int salary;
//     string status;

// public:
//     void setdata_f()
//     {
//         cout << "\nenter daily rate : ";
//         cin >> daily_rate;
//         cout << "enter days : ";
//         cin >> days;
//         salary = daily_rate * days;
//         fflush(stdin);
//         cout << "enter status : ";
//         getline(cin, status);
//     }
//     void display_e()
//     {
//         cout << "\n salary : " << salary;
//         cout << "\nstatus : " << status;
//     }
// };
// class part_time
// {
//     int hours;
//     int hourly_rate;
//     int salary;
//     string status;

// public:
//     void setdata_p()
//     {
//         cout << "\nenter daily rate : ";
//         cin >> hourly_rate;
//         cout << "enter hours : ";
//         cin >> hours;
//         salary = hourly_rate * hours;
//         fflush(stdin);
//         cout << "enter status : ";
//         getline(cin, status);
//     }
//     void display_p()
//     {
//         cout << "\n salary : " << salary;
//         cout << "\nstatus : " << status;
//     }
// };
// int main()
// {
//    fulltime f1[3];
//    part_time p1[3];  
//     int choice;
//     cout << "enter your choice ";
//     cin >> choice;
//     cout << "1. enter record\n2. display record\n3. search record\n4. exit";
//     while (true)
//     {
//         switch (choice)
//         {
//         case 1:
//           for(int i=0;i<2;i++){
//                 f1[i].setdata();
//                 f1[i].setdata_f();
//             }
//             p1[1].setdata_p();
//             break;
//         case 2:
//           for(int i=0;i<2;i++){
//                 f1[i].display();
//                 f1[i].display_e();
//             }
//             p1[1].setdata_p();
//             break;
//         case 3:

//             break;
//         default:
//             break;
//         }
//     }
//     return 0;
// }
#include<iostream>
#include<string.h>

using namespace std;
class Employee{
    int emp_code;
    char name[10];
    public:
    Employee(){
        emp_code=0;
        strcpy(name,"no input");
    }  
    void setdata1(){
        cout<<"Enter Employee Code "<<endl;
        cin>>emp_code;
        cout<<"Enter Your name:"<<endl;
        cin>>name;
    }  
    void display1(){
        cout<<"Emp Number is :"<<emp_code<<endl;
        cout<<"Employee Name is :"<<name<<endl;
    }
    int code_return(){
        return emp_code;
    }
};
class Fulltime:public Employee{
    int daliy_rate;
    int number_of_days;
    int salary;
    public:
    Fulltime(){
        daliy_rate=0;
        number_of_days=0;
        salary=daliy_rate*number_of_days;
    }
    void setdata2(){
        cout<<"Enter  daliy_rate "<<endl;
        cin>> daliy_rate;
        cout<<"Enter  number_of_days "<<endl;
        cin>> number_of_days;
    
    }
    void display2(){
        salary=daliy_rate*number_of_days;
        cout<<"Salary is :"<<salary<<endl;
        cout<<"Status= Fulltime"<<endl;
    }
    void search_f(int code){
if(code_return()==code){
display1();
display2();
}
    }
};
class Parttime:public Employee{
    int number_of_working_hours, hourly_rate, salary;
    public:
    Parttime(){
        number_of_working_hours=0;
        hourly_rate=0;
    }
    void setdata3(){
        cout<<"Enter number_of_working_hours"<<endl;
        cin>>number_of_working_hours;
        cout<<"Enter hourly_rate"<<endl;
        cin>>hourly_rate;
    }
    void display3(){
        salary=hourly_rate*number_of_working_hours;
        cout<<"Salary is :"<<salary<<endl;
        cout<<"Status = Parttime"<<endl;
    }
};

int main(){
    int choice ,time;
    static int count;
    char stream;
    cout<<"Enter Total number of Employes :"<<endl;
    cin>>time;
        Parttime p1[3];
        Fulltime f1[3];
    do{
    cout<<"1.Enter Record"<<endl;
    cout<<"2.Display Record"<<endl;
    cout<<"3.Search Record"<<endl;
    cout<<"4.Quit"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    cout<<"Enter Stream "<<endl<<"Parttime =p"<<endl<<"Fulltime=f";
    cin>>stream;
    if(stream=='p' || stream=='P'){
    switch (choice)
    {
    case 1:
    system("cls");
       for(int i=0;i<3;i++){
        p1[i].setdata1();
        p1[i].setdata3();
       }
        break;
    case 2:
    system("cls");
    for(int i=0;i<3;i++){
        p1[i].display1();
        p1[i].display3();
    }
        break;
    // case 3:
    //     for(int i=0;i<3;i++){

    //     }
    //     break;    
    case 4:
        exit(0); 
    }
    }
    if(stream=='f' || stream=='F'){
    switch (choice)
    {
    case 1:
        system("cls");

        f1[1].setdata1();
        f1[1].setdata2();
        break;
        
    case 2:
        system("cls");
        f1[1].display1();
        f1[1].display2();
        break;
    case 3:
    int code;
    cout<<"enter code : ";
    cin>>code;     
f1[1].search_f(code);
        
        break;    
    case 4:
        exit(0); 
    }   
    }
    }while(choice!=4);
    return 0;
}
