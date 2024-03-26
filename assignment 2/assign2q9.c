//write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main(){
int a;
char b;
float c;
double d;
printf("size of int variable is %d",sizeof(a));
printf("\nsize of char variable is %d",sizeof(b));
printf("\nsize of float variable is %d",sizeof(c));
printf("\nsize of double variable is %d",sizeof(d));
return 0;
}