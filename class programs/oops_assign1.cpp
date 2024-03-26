#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    fstream fin;
    string p;
    int count=0;
    char c[20];
fin.open("D:/i neuron c++/class programs/file/assign.txt",ios::trunc|ios::in|ios::out);
for(int i=0;i<5;i++){
cin.getline(c,20);
fin<<c<<endl;
}
fin.close();
    fin.open("D:/i neuron c++/class programs/file/assign.txt",ios::in);
   while (!fin.eof())
   {
    fin.getline(c,20);
    if(c[0]!='A'){
        count++;
    }
    cout<<c<<endl;
    cout<<count<<endl;
   }
   cout<<"Answer is :"<<count-1<<endl;
    fin.close();
return 0;
}