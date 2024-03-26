//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
int great(int arr[],int n1);
int main()
{
    int a[10],i,n1;
      printf("enter a no of elements in first array  : ");
    scanf("%d", &n1);
    printf("enter %d numbers : \n",n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

      printf("\nGreatest number stored in an array : %d",great(a,n1));
    return 0;
}
int great(int arr[],int n1){
int i;
  for (i = 0; i < n1; i++){
        if(arr[0]<arr[i]) 
        {
        arr[0]=arr[i];
        }
      }
      return arr[0];
}