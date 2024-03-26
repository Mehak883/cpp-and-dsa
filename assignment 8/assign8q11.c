 /*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
 #include <stdio.h>
int main()
{
    int i, j,k,l,n,flag=1;
    char p='A';
    printf("enter a number");
    scanf("%d", &n);
     for (i = 1; i <=n; i++)
    {
        for (j=1; j <=n-i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= 2*i-1; k++){    
            
        printf("%c",p);
if(k==i){
flag=0;
}
        if(flag==1){
            p++;
        }
        else{
            p--;
        }
        }
        flag=1;p='A';
        printf("\n");
    }

    return 0;
}
