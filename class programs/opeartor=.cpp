#include<iostream>
#include<cstring>
using namespace std;
class mystring{
char *a;
int size;
public:
mystring()
{
cout<<"default called"<<endl;
//a= (char*)malloc(1);
//size =1;
}
mystring(char *str){
    cout<<"parametrized constructor called !!"<<endl;
   size= strlen(str);
   a=(char*)malloc(size+1);
  // a=str;
   strcpy(a,str);
}
mystring(const mystring &s){
    cout<<"copy called"<<endl;
      size= strlen(s.a);
   a=(char*)malloc(size+1);
  // a=str;
   strcpy(a,s.a);
}
mystring operator=(mystring &s){
    cout<<"assignmemt operator called"<<endl;
    if(a==s.a){
        return s;
    }
    free(a);
 size= strlen(s.a);
   a=(char*)malloc(size+1);
  // a=str;
   strcpy(a,s.a);
   return *this;
}
void change(char *str){
    free(a);
    size=strlen(str);
    a=(char*)malloc(size+1);
    strcpy(a,str);
}
void display(){
    cout<<a<<endl;
}

};
int main(){
  mystring s1("mehak");
  mystring s2=s1;
  mystring s3;
  mystring s4("mysirg");
  mystring s5;
  s3=s1;
  s4=s1;
  s1=s1;
  //s5=s4=s1;
  s1.change("dhawan");
  s1.display();
  cout<<"s2 calles"<<endl;
  s2.display();
  s3.display();
  s4.display();
  s5.display();
    return 0;
}