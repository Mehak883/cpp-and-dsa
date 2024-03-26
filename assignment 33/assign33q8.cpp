// Create a base class called proof. Use this class to store two int type values that could be used to prove that triangle is a right
// angled triangle. Create a class compute which will determine whether a triangle is a right angled triangle. Using these classes, 
// design a program that will accept dimensions of a triangle, and display the result.Using these classes, design a program that will 
// accept dimensions of a triangle, and display the result.
#include<iostream>
using namespace std;
class proof{
    protected:
    int ans;
int b,p,h;
public:
void get_data(){
cout<<"enter b ,p and h : ";
cin>>b>>p>>h;
}
virtual void display()=0;

};
class compute:public proof{
public:
void compute_result(){
int H,B,P;
H=h*h;
B=b*b;
P=p*p;

int sum=B+P;
if(H==sum){
ans=1;
}
else{
    ans=0;
}
}
void display(){
if(ans==+1){
    cout<<"\nit is a right angle triangle\n";
}
else{
    cout<<"\nit is a not right angle triangle\n";
}
}

};
int main(){
    compute c1;
    c1.get_data();
    c1.compute_result();
    c1.display();
        return 0;
}