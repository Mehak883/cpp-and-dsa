//2. Write a C++ program to read a text file and count the number of characters in it.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char s;
     int count=0;
    ifstream fin;
    if(!fin){
        cout<<"no open ";
    }
    else{
    fin.open("D:/i neuron c++/class programs/file/ans1.txt",ios::in);
    while(!fin.eof()){
fin>>s;
cout<<s;
    count++;
    }
    fin.close();
    cout<<"count : "<<count;
    }
    return 0;
}
