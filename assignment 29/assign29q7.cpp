// 7. Create two class Time and Minute and add required getter and setter including constructors. Now you need to type cast Time object 
//into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
// Time t1(2,30);
// t1.display();
// Minute m1;
// m1.display();
// m1=t1 // Fetch minute from time
// t1.display();
// m1.display();
// return 0;
//}
#include<iostream>
using namespace std;
class minutes{
int minut;
public:
minutes(){
    minut=0;
}
minutes(int a){
    minut=a;
}
void display(){
    cout<<"min = "<<minut;
}
};
class time{
int hr;
int min;
public:
time(int a,int b){
    hr=a;
    min=b;
}
void display(){
    cout<<hr<<" : "<<min;
} 
operator int(){
    return min;
}
operator minutes(){
    return min;
}
};
int main(){
  time t1(2,30);  
  t1.display();
  minutes m1;
m1.display();
m1=t1;
m1.display();
    return 0;
}