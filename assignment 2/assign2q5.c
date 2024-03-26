//write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main(){
int x,a,r1,r2,r3,sum;
printf("enter a number : ");
scanf("%d",&x);
a=x;
r1=a%10;
a=a/10;
r2=a%10;
a=a/10;
r3=a;
sum=r1+r2+r3;

printf("sum of the digits of (three digit number)%d is %d",x,sum);
return 0;
}