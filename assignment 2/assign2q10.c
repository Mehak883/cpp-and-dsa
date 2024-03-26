//write a program to make the last digit of a number stored in a variable as 0 
#include<stdio.h>
int main(){
int a,r;
printf("enter a : ");
scanf("%d",&a);
r=a%10;
a=a-r;
printf("\nnumber is %d",a);
    return 0;
}