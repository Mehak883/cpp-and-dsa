//3. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int natural_num(int );
int sum=0;
int main(){
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("sum of first %d odd natural number is :%d",x,natural_num(x));
    return 0;
}
int natural_num(int n){

  if(n>=1){
    natural_num(n-1);
    sum=sum+(2*n-1);
  }
   return sum;
}