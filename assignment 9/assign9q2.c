/* 2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit    */
#include<stdio.h>
#include <stdlib.h>
int main(){
int a,b,c;
printf("enter first number : ");
scanf("%d",&a);
printf("enter second number : ");
scanf("%d",&b);
printf("1. Addition\n2.Substraction \n3.Multiplication\n4. Devision\n5. Exit");
printf("\nchoose an operator you want to perform opertion  :");
scanf("%d",&c);
switch (c){
    case 1:
    printf("enter first number : ");
scanf("%d",&a);
printf("enter second number : ");
scanf("%d",&b);
    printf("%d + %d = %d",a,b,a+b);
    break;
    case 2:
    printf("enter first number : ");
scanf("%d",&a);
printf("enter second number : ");
scanf("%d",&b);
    printf("%d - %d = %d",a,b,a-b);
    break;
    case 3:
    printf("enter first number : ");
scanf("%d",&a);
printf("enter second number : ");
scanf("%d",&b);
    printf("%d * %d = %d",a,b,a*b);
    break;
    case 4:
    printf("enter first number : ");
scanf("%d",&a);
printf("enter second number : ");
scanf("%d",&b);
    printf("%d / %d = %d",a,b,a/b);
    break;
    case 5:
      exit(0);
}
return 0;
}