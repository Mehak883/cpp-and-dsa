//write a program to check whether a given number is devisible by 5 or not.
#include<stdio.h>
int main(){
int a;
printf("enter a number : ");
scanf("%d",&a);
if(a%5==0){
printf("%d is devisible by 5",a);
}
else{
printf("%d is not devisible by 5",a);
}
    return 0;
}