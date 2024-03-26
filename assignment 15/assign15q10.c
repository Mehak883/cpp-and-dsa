// 10. Write a function in C to count the frequency of each element of an array.
#include <stdio.h>
int frequency(int arr[], int n1);
int main()
{
    int i,  n1, arr[10];
    printf("enter n : ");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }
    frequency(arr,n1);
   return 0;
}
int frequency(int arr[], int n){

    int b[n], duplicate = 0,j,i;
    for (i = 0; i < n; i++)
    {
        b[i] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                b[j] = duplicate;
            }
        }
        if (b[i] != duplicate){
            b[i] = count;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (b[i] != duplicate)
        {
            printf("frequency of  %d is %d\n", arr[i], b[i]);
        }
    }

}