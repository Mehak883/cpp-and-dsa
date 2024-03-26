#include<stdio.h>
int main(){
int i=1,n,sum=0;
while (1)
{
printf("enter a no");
scanf("%d",&n);
if(n==0){
    break;
}
sum =sum+n;
}
printf("%d",sum);
}