//write a program to swap values of two int variables.
#include<stdio.h>
int main(){
int a,b,c;
printf("enter a and b : ");
scanf("%d %d",&a,&b);
printf("\nBEFORE SWAPPING :\na=%d\tb=%d",a,b);
c=a;
a=b;
b=c;
printf("\n\nAFTER SWAPPING :\na=%d\tb=%d",a,b);
return 0;
}