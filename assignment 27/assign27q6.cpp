// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.

#include <iostream>
#include <string.h>
using namespace std;
class cstring
{
    char a[10];

public:
    void setdata()
    {
        cout << "enter 1st string : ";
        cin.getline(a, 10);
        fflush(stdin);
    }
    // friend void display(cstring x);
    cstring operator+(cstring x)
    {
        cstring t;
        strcpy(t.a, a);
        strcat(t.a, x.a);
        return t;
    }
    void operator==(cstring x)
    {
        if (strcmp(a, x.a) == 0)
        {
            cout << "\n string are same";
        }
        else
        {
            cout << "\n strings are differ ";
        }
    }
    friend void display(cstring x);

};
void display(cstring x)
    {
        cout << x.a << endl;
    }


int main()
{
    cstring c1, c2, c3;
    c1.setdata();
    c2.setdata();
    display(c1);
    display(c2);
    c3 = c1 + c2;
    display(c3);
    c1 == c2;
    return 0;
}
// #include<iostream>
// #include<string.h>
// using namespace std;
// class CString{
//     char str[10];
//     public:
//     CString(){}
//     CString(char s[]){
//         strcpy(str,s);
//     }
//     CString operator+(CString p){
//         CString q;
//         char s1[10];
//         strcpy(s1,str);
//         strcpy(q.str,strcat(s1,p.str));
//         return q;
//     }
//     // CString (const CString &p){
//     //     strcpy(str,p.str);
//     // }
//     void operator ==(CString p){
//         if(strcmp(str,p.str)==0){
//             cout<<endl<<"Both Strings are same."<<endl;
//         }
//         else
//          cout<<endl<<"Both Strings are not same."<<endl;
//     }
//     void display(){
//         cout<<str;
//     }
// };
// int main(){
    
//     CString c1("hello"),c2("hello"),c3;
//     c3=c1+c2;     //copy constructur
//     c3.display();           
//     c1.operator==(c2);
//     return 0;
// }