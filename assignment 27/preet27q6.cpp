#include<iostream>
#include<string.h>
using namespace std;
class CString{
    char str[10];
    public:
    CString(){
    }
    CString(char s[]){
        strcpy(str,s);
    }
    CString operator+(CString p){
        CString q;
        strcpy(q.str,strcat(str,p.str));
        cout<<q.str;
        cout<<endl;
        return q;
    }
    void operator ==(CString p){
        if(strcmp(str,p.str)==0){
            cout<<endl<<"Both Strings are same."<<endl;
        }
        else
         cout<<endl<<"Both Strings are not same."<<endl;
    }
    void display(){
        cout<<str;
    }
};
int main(){
    
    CString c1("preet"),c2("Mehak"),c3;
    c3=c1+c2;
    c3.display();           //shallow copy
    c1==c2;
    return 0;
}