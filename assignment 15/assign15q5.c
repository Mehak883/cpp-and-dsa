// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include <stdio.h>
int duplicate(int arr[],int n1);
int main()
{
    int a[10], i, n1;
    printf("enter a no of elements in first array  : ");
    scanf("%d", &n1);
    printf("enter %d numbers : \n", n1);
for ( i = 0; i < n1; i++)
{
    scanf("%d",&a[i]);
}
     printf("first occurrence of adjacent duplicate values in the array : %d", duplicate(a,n1));
    return 0;
}
int duplicate(int arr[],int n1){
int temp ,i;
 temp=arr[0];
    for (i = 0; i <n1; i++)
    {
        if (temp== arr[i+1])
        {
       break;
        }
        else{
            temp=arr[i+1];
        }
    }
    return temp;
}