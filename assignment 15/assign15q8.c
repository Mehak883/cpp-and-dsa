//8. Write a function in C to print all unique elements in an array.
#include <stdio.h>
int unique(int arr[], int n1);
int main()
{
    int a[10], i, n1;
    printf("enter a no of elements in array  : ");
    scanf("%d", &n1);
    printf("enter %d numbers : \n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n\n");
    unique(a, n1);
    return 0;
}
int unique(int arr[], int n1)
{
  
int flag,temp,i,j;
    for (i = 0; i < n1; i++)
    {
        flag=0;
        

        for (j =0; j < n1; j++)
           {
            if(i!=j){
            if (arr[i] == arr[j])
            {
                flag = 1;       
            }
            }
        }
        if (flag == 0)
        {
            printf("%d ", arr[i]);
        }
     }
}