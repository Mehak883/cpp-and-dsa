#include<iostream>
using namespace std;
class linklist{
public :
int a;
linklist *next;

} ;
int main(){
    int i;
     linklist *start,*mode[3];
for( i=0;i<3;i++){
    *(mode+i)=NULL;
}
   
   for( i=0;i<3;i++){
    mode=new linklist();
}
for(int i=0;i<3;i++){
    (mode+i)->value=i;
}
 int *p;

    return 0;
}