/*6. Define a class student and write a program to enter student details using constructor and define member function to display all the
details*/
#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int r_no;
    char a[10];
    char phn_no[10];
    char branch[10];

public:
    student(int x, char n[], char ph[], char br[])
    {
        r_no = x;
        strcpy(a, n);
        strcpy(phn_no, ph);
        strcpy(branch, br);
    }
    void display()
    {
        cout << r_no << "\t" << a << "\t" << phn_no << "\t" << branch;
    }
};
int main()
{
    int roll;
    char name[10], phone[10], b[10];
    cout << "enter roll no : ";
    cin >> roll;
    fflush(stdin);
    cout << "enter name : ";
    cin.getline(name, 10);
    fflush(stdin);
    cout << "enter phone number : ";
    cin.getline(phone, 10);
    fflush(stdin);
    cout << "enter branch ";
    cin.getline(b, 10);
    fflush(stdin);
    student s(roll, name, phone, b);
    s.display();
    return 0;
}