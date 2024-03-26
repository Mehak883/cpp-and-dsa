//write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main(){
int x,r,a,m;
printf("enter a number : ");
scanf("%d",&a);
x=a;
r=x%10;
x=x/10;
m=(r*100)+x;
printf("\nby rotaing %d by onr position toward the right,ans is %d",a,m);
return 0;
}