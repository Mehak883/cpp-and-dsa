//2. Define a function to find the highest value digit in a given number.
#include <iostream>
using namespace std;
int highest(int num,int rev){
        int r=0;
  while (num > 0)
    {
        rev = num % 10;
        num = num / 10;
        if(rev>r){
            r=rev;
        }
    }
    return r;
}
int main()
{
    int n,rev=0;
    system("cls");
    cout<<"enter a number : ";
    cin >> n;
    cout<<"highest value digit in a given number : "<<highest(n,rev);
    return 0;
}