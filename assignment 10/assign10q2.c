//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
int SI(float p,float r,float t);
int main(){
float simple_interest;
float principle,rate,time;
printf("enter principle : ");
scanf("%f",&principle);
printf("enter rate : ");
scanf("%f",&rate);
printf("enter time : ");
scanf("%f",&time);
simple_interest =SI(principle,rate,time);
printf("simpe interst = %.2f",simple_interest);
return 0;
}
int SI(float p,float r,float t){
float s;
s=(p*r*t)/100;
    return s;
}