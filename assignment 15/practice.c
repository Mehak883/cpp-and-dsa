#include<stdio.h>
int main(){
int n,r,rev=0,temp;
printf("enter a num : ");
scanf("%d",&n);
temp=n;
while(n>0){
r=n%10;
n=n/10;
rev=(rev*10+r);
}
printf("\n\n%d\n\n",rev);
if(rev==temp){
    printf("%d is a palindrome number",rev);
}
else{
    printf("%d is not a palindrome number",rev);  
}
    return 0;
}