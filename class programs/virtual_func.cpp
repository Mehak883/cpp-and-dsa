#include<iostream>
using namespace std;
class flight{
public:
void search(){
cout<<"search called"<<endl;
}
virtual void book(){
cout<<"book flight"<<endl;
} 

};
class airindia:public flight{
public:
void book(){
    cout<<"airindia flight book "<<endl;
}
};
class spicejet:public flight{
public:
void book(){
    cout<<"spicejet flight book"<<endl;
}
spicejet getreference(){
    
}
};
int main(){
    flight *fl1,*fl2;
    fl1=getreference();
fl1->search(); 
    fl1->book();
    return 0;
}