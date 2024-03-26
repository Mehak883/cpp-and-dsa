//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include <iostream>
using namespace std;
int check(int n){
     int  a, b, i, c, flag = 0;
a = 0;
    b = 1;
    c = a + b;
    if (n == 0 || n == 1)
    {
        printf("\n%d is a number of fibonacci series", n);
    }
    for (; c <= n;)
    {
        a = b;
        b = c;
        c = a + b;
        if (n == c)
        {
            flag = 1;
           return flag;
        }
    }
    return flag;
}
int main()
{
    int num;
    cout<<"enter a number : ";
    cin>>num;
    if(check(num)==1){
      cout<<"\n"<<num<<" is a number of fibonacci series";
     }
     if(check(num)==0){
      cout<<"\n"<< num <<" is a not number of fibonacci series";
     }
    return 0;
}