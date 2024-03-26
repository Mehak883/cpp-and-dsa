/*
1234321
123 321
12   21
1     1     */ 
#include<stdio.h>
int main(){
int i,j,k,m,l,n,flag=1,p=1,q=n,g=1;
printf("enter a number : ");
scanf("%d",&n);
 for(m=1;m<=n;m++){
        printf("%d",m);    
}
 for(m=n-1;m>=1;m--){
        printf("%d",m);    
}
        printf("\n");
for(i =2;i<=n;i++){
   
    for(j=0;j<=n-i;j++){
        printf("%d",p);
        p++;
    }

    for(k=1;k<=2*i-3;k++){
        printf(" ");
    }
    for(l=0;l<=n-i;l++){  
if(i==2&&l==0){
    q=n-1;
}
        printf("%d",q);
        q--;
    }
    printf("\n");
p=1;
q=n-i;
}
return 0;
}
