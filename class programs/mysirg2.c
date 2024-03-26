#include <stdio.h>
int main()
{
int x;
printf("enter x : ");
scanf("%d",&x);
if(x>0){
    printf("%d is positive",x);
}
if(x<=0){
    printf("%d is non positive",x);
}
printf("\nenter x : ");
scanf("%d",&x);
if(x>0){
    printf("%d is positive",x);
}
else{
    printf("%d is non positive",x);
    }
    return 0;
}