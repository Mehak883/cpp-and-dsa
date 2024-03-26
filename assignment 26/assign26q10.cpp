/*10. Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display 
the result.*/
#include<iostream>
using namespace std;
class staticcount{
static int count;
public:
static void counter(){
count++;
}
static void display(){
cout<<count<<" ";
}
};
int staticcount::count;
int main(){
    for(int i=0;i<3;i++){
    staticcount::counter();
    staticcount::display();
    }
    return 0;
}