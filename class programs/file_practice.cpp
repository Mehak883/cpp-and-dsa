#include<iostream>
#include<fstream>
using namespace std;
int main(){
string s;
    ofstream fout;
fout.open("D:/i neuron c++/class programs/file/prc.txt",ios::app|ios::out|ios::in);
if(!fout){
    cout<<"no ans";
}
else{
while(fout){
    getline(cin,s);
    if(s=="-1"){
        break;
    }
    fout<<s<<endl;
}
fout.close();
}
ifstream fin;
fin.open("D:/i neuron c++/class programs/file/prc.txt",ios::in);
    while(fin){
getline(fin,s);
cout<<s<<endl;
    }
fin.close();
    return 0;
}