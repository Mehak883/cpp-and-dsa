/*
  *****    *****
 *******  *******
********* ******** 
******mysirg*******
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *      */
 
    #include<stdio.h>
int main(){
int i,j,k,l,m,n;
printf("enter a number : \n");

for(i =1;i<=3;i++){
     for (m =0; m<=3-i; m++)
        {
            printf(" ");
        }
    for(j=1;j<=2*i+3;j++){
        printf("*");
    }
    if(i==1){
        printf("     ");
    }
    if(i==2){
        printf("   ");
    }
    if(i==3){
        printf(" ");
    }
      for(j=1;j<=2*i+3;j++){
        printf("*");
    }
    printf("\n");
}
printf(" ******mysirg*******\n");
printf("  ");
for (i = 9; i>=1; i--)
    {
        for (j = 1; j <=9-i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= 2*i-1; k++){            
        printf("*");
        }
        printf("\n  ");
    }
return 0;
}