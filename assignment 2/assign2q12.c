//assume price of 1 USD is INR 76.23.write a program to take the amount in INR and convert it into USD
#include<stdio.h>
int main(){
    float amount;
printf("enter the amount in INR");
scanf("%f",&amount);
printf("\nthe amount in USD is %f",amount/76.23);
    return 0;
}