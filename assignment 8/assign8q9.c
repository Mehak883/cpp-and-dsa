/*
1234321
 12321
  121
   1    */
   #include <stdio.h>
int main()
{
    int i, j,k,l,n,p=1,flag=1;
    printf("enter a number");
    scanf("%d", &n);
     for (i = n; i >=1; i--)
    {
        for (j=1; j <=n-i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= 2*i-1; k++){    
            
        printf("%d",p);
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
        flag=1;p=1;
        printf("\n");
    }

    return 0;
}
