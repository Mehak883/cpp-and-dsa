// 8. A file 'Employee.txt' contains empno and empname. Write a C++ program to add and read contents of this file and search for an
// employee whose name is 'XYZ'.
#include <iostream>
#include <fstream>
#include<cstring>
using namespace std;
class employee
{
    int empno;
    char name[10];

public:
    void enter_rec()
    {
        cout << "enter employee no : ";
        cin >> empno;
        fflush(stdin);
        cout << "enter employee name : ";
        gets(name);
    }
    void e_record()
    {
        ofstream fout;
        char ch;
        fout.open("D:/i neuron c++/class programs/file/employ.txt", ios::app | ios::out | ios::in);
        do
        {
            
            enter_rec();
            fout.write((char *)this, sizeof(*this));
            cout << "do you want to enter more record : ";
            cin >> ch;
        } while (ch == 'y');
        fout.close();
    }
    void dis_record()
    {
        cout << "\nemployee number : " << empno;
        cout << "\nemployee name : " << name;
    }
    void display()
    {
        ifstream fin;
        fin.open("D:/i neuron c++/class programs/file/employ.txt", ios::in);
        if (!fin)
        {
            cout << "no file available "<<endl;
        }
        fin.read((char *)this, sizeof(*this));
      while(!fin.eof())
        {
            dis_record();
            fin.read((char *)this, sizeof(*this));
        }
        fin.close();
    }
    void search(){
  ifstream fin;
char temp[10];
int flag=0;
cout<<"enter name you want to search : ";
fflush(stdin);
cin.get(temp,10);
        fin.open("D:/i neuron c++/class programs/file/employ.txt", ios::in);
        if (!fin)
        {
            cout << "no file available "<<endl;
        }
        fin.read((char *)this, sizeof(*this));
        while(!fin.eof()){
            if(strcmp(temp,this->name)==0){
                cout<<"record found !!!"<<endl;
           flag=1;
           break;  
            }
                      fin.read((char *)this, sizeof(*this));    
        }
        if(flag==1){
            dis_record();
        }
        fin.close();
    }
};
int main()
{
    int ch;
    employee e1;
    while (true)
    {
        cout << "\nenter rec";
        cout << "\ndisplay rec ";
        cout << "\nsearch rec\n";
        cout << "enter choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            e1.e_record();
            break;
        case 2:
            e1.display();
            break;
            case 3:
            e1.search();
        default:
            exit(0);
        }
    }
    return 0;
}