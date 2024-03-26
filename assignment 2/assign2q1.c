//write a program to print unit digit of a givn number
#include<stdio.h>
int main(){
 int a,r;
printf("enter a : ");
scanf("%d",&a);
r=a%10;
printf("\nunit digit of number is %d",r);
return 0;
}