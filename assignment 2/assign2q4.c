//write a program to swap values of two int variables without using third variable
#include<stdio.h>
int main(){
int a,b;
printf("enter a and b : ");
scanf("%d %d",&a,&b);
printf("\nBEFORE SWAPPING :\na=%d\tb=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n\nAFTER SWAPPING :\na=%d\tb=%d",a,b);
return 0;
}