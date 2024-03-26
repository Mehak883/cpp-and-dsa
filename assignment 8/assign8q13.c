/*ABCDEDCBA
  ABCD DCBA
  ABC   CBA
  AB     BA
  A       A     */
#include<stdio.h>
int main(){
int i,j,k,m,l,n,flag=1,q=n,d;
char g='A',p='A';
printf("enter a number : ");
scanf("%d",&n);
 for(m=1;m<=n;m++){

        printf("%c",g);
        g++;    
}
--g;
d=g-1;
 for(m=n-1;m>=1;m--){
     g--;
        printf("%c",g);    
    
}
        printf("\n");
for(i =2;i<=n;i++){
   
    for(j=0;j<=n-i;j++){
        printf("%c",p);
        p++;
    }

    for(k=1;k<=2*i-3;k++){
        printf(" ");
    }
    for(l=0;l<=n-i;l++){  
if(i==2&&l==0){
    q=d;
}
        printf("%c",q);
        q--;
    }
    printf("\n");
p='A';
q=--d;
}
return 0;
}
