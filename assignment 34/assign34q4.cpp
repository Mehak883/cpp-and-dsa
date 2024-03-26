//4. Write a program to copy the contents of one text file to another while changing the case of every alphabet.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
     char s;
    ofstream fout;
    ifstream fin;
    fout.open("D:/i neuron c++/class programs/file/ans4.txt", ios::trunc| ios::out | ios::in);
    fin.open("D:/i neuron c++/class programs/file/ans1.txt",ios::in);
   while(true){
    
fin>>s;
  if(s>=65&&s<=90){
   fout<<char(tolower(s));
   }
   else if(s>=97&&s<=122){
       fout<<char(toupper(s));
   }
else{
    fout<<s;
}
if(fin.eof()){
    break;
}
   }
   fout.close();
   fin.close();
    return 0;
}