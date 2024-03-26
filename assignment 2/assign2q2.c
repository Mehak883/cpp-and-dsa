//wap to print a given number without its last digit
#include<stdio.h>
int main(){
int x,a;
printf("enter a number : ");
scanf("%d",&x);
a=x/10;
printf("Without last digit, The number is %d ",a);
return 0;
}
