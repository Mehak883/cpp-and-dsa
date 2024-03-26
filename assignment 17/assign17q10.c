// // 10. Write a program in C to Find the Frequency of Characters.
// #include <stdio.h>
// int frequency(char arr[], int n1);
// int main()
// {
//     int i, n1;
//     char arr[10];
//     printf("enter n : ");
//     scanf("%d", &n1);
//     scanf("%s", arr);
//     frequency(arr, n1);
//     return 0;
// }
// int frequency(char arr[], int n)
// {

//     char b[n], duplicate = '0', count;
//     int j, i;
//     for (i = 0; i < n; i++)
//     {
//         b[i] = arr[i];
//     }
//     for (i = 0; i < n; i++)
//     {
//         count = '1';
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//                 b[j] = duplicate;
//             }
//         }
//         if (b[i] != duplicate)
//             b[i] = count;
//     }
//     for (i = 0; i < n; i++)
//     {
//         if (b[i] != duplicate)
//         {
//             printf("frequency of  %c is %c\n", arr[i], b[i]);
//         }
//     }
// }
// 10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
int frequency(int arr[], int n1);
int main()
{
    int i, n1;
    char arr[10];
    printf("enter n : ");
    scanf("%d", &n1);
    for(i=0;i<n1;i++){
    scanf("%d", arr[i]);
    }
    frequency(arr, n1);
    return 0;
}
int frequency(int arr[], int n)
{

    int b[n], duplicate = 0, count;
    int j, i;
    for (i = 0; i < n; i++)
    {
        b[i] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                b[j] = duplicate;
            }
        }
        if (b[i] != duplicate)
            b[i] = count;
    }
    for (i = 0; i < n; i++)
    {
        if (b[i] != duplicate)
        {
            printf("frequency of  %c is %c\n", arr[i], b[i]);
        }
    }
}