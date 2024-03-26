#include<iostream>
#include<fstream>
using namespace std;
class my{
    protected:
int a;
char s[10];
int b;
public:
void set(){
    cout<<"enter a : ";
    cin>>a;
    fflush(stdin);
    cout<<"enter str : ";
    gets(s);
    cout<<"enter b : ";
    cin>>b;
}
void enter_rec(){
    ofstream fout;
    this->set();
    fout.open("D:/i neuron c++/class programs/file/chk.txt",ios::app|ios::out|ios::in);
    fout.write((char*)this,sizeof(*this));
   fout.close();
}
void write_s(){
    cout<<"a = "<<a<<endl;
    cout<<"s = "<<s<<endl;
    cout<<"b = "<<b<<endl;
}
void display(){
    ifstream fin;
 fin.open("D:/i neuron c++/class programs/file/chk.txt",ios::in);
 fin.read((char*)this,sizeof(*this));
 while(!fin.eof()){
write_s();
fin.read((char*)this,sizeof(*this));
 }
fin.close();
}
};

class your:public my{
    int a1;
public:
void yourfunc(){
    cout<<"enter a1 : ";
    cin>>a1;
ifstream fin;
 fin.open("D:/i neuron c++/class programs/file/chk.txt",ios::in);
while(!fin.eof()){
    fin>>a;
fin>>b;
if(a1==a){
    cout<<b;
}
}
fin.close();
}
};
int main(){
 your y;
 int ch;
 cout<<"enter your choice : ";
 cin>>ch;
 switch(ch){
    case 1:
 y.enter_rec();
 break;
 case 2:
 y.display();
 break ;
 case 3:
 y.yourfunc();
break;
default :
exit(0);
 }
    return 0;
}