//write a program to check wether the given number is even or odd using a bitwise operator
#include<stdio.h>
int main(){
    
    int a,x,n;
    printf("enter a number : ");
scanf("%d",&a);
(a&1==1)?  printf("\nTHE NUMBER IS ODD"):printf("\nTHE NUMBER IS EVEN");

return 0;
}