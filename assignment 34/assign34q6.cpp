#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char s;
    string s1;
     int countc=0,words=0,lines=0;
    ifstream fin;
    if(!fin){
        cout<<"no open ";
    }
    else{
    fin.open("D:/i neuron c++/class programs/file/ans1.txt",ios::in);
    while(!fin.eof()){
fin>>s;

    countc++;
   }
    fin.close();
        fin.open("D:/i neuron c++/class programs/file/ans1.txt",ios::in);
    while(!fin.eof()){
        fin>>s1;
        
        words++;
    }
        fin.close();
        fin.open("D:/i neuron c++/class programs/file/ans1.txt",ios::in);
          while(!fin.eof()){
      getline(fin,s1);
        lines++;
    }
    cout<<"characters : "<<countc-1;
    cout<<"\nwords : "<<words-1;
    cout<<"\nlines : "<<lines-1;
    }
    return 0;
}