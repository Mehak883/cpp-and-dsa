/*10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3.
 (TSRN)*/
#include<stdio.h>
void prime_factor(int n);
int main(){
int num;
printf("enter a number");
scanf("%d",&num);
prime_factor(num);
return 0;
}
void prime_factor(int n){
    int  r, ans,i=2;
while(i<=n&&n>0){
for(i;n%i!=0;i++){
}
if(n%i==0){
    printf("%d ",i);
}
n=n/i;
}
}