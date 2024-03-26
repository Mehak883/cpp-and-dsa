//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
int circle(float r);
int main(){
float radius,a;
printf("enter the radius : ");
scanf("%f",&radius);
a=circle(radius);
printf("Area of circle is %.2f ",a);
return 0;
}
int circle(float r){
float area;
area=3.14*r*r;
return area;
}
