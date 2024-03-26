//5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include <stdio.h>
#include<string.h>
int main()
{
    char a[10][50],s[10];
    int v=0,l,i ,j,n,flag;
    printf("enter number of elements : ");
    scanf("%d",&n);
    printf("enter elements : ");
        for (j = 0; j < n; j++)
        {      
        scanf("%s",a[j]);
        }
           printf("\nodd emails are : \n");
        for(j=0;j<n;j++){
            flag =0;
            l=strlen(a[j]);
            for(i=0;i<l;i++){
            if('@'==a[j][i] ){
           flag=1;
           break;
            }
            }
            if(flag==0){
                printf("%s\n",a[j]);
            }
        }
        return 0;
}