/*
**********
****  ****
***    ***
**      **
*        *  */
#include<stdio.h>
int main(){
int i,j,k,l,n;
printf("enter a number : ");
scanf("%d",&n);
for(i =1;i<=n;i++){
    for(j=0;j<=n-i;j++){
        printf("*");
    }
    for(k=1;k<=2*i-1;k++){
        printf(" ");
    }
    for(l=0;l<=n-i;l++){
        printf("*");
    }
    printf("\n");

}
return 0;
}
