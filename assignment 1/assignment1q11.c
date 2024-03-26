#include<stdio.h>
int main(){
int hh,mm;
printf("HH : MM\n");
scanf("%d%*[:]%d",&hh,&mm);
printf("%d Hours and %d Minutes",hh,mm);
return 0;
}