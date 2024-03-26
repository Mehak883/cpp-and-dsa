/*3. Define a class Factorial and define an instance member function to find the Factorial of a number using
 class.*/
 #include<iostream>
 using namespace std;
 class factorial{
int num;
public : 
void give_data(){
cout<<"enter number : ";
cin>>num;
}
void display(){
    int i,fact=1;
for(i=1;i<=num;i++){
fact=i*fact;
}
cout<<"factorial of "<<num<<" is : "<<fact;
}
 };
 int main(){
   factorial f1;
   f1.give_data();
   f1.display(); 
    return 0;
 }