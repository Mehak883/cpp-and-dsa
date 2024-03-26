#include<stdio.h>
int main(){
int dd,mm,yy;
printf("DD/MM/YYYY\n");
scanf("%d%*[/]%d%*[/]%d",&dd,&mm,&yy);
printf("Day-%d , Month-%d , Year-%d",dd,mm,yy);
return 0;
}