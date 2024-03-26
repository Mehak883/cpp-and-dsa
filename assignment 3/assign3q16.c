// // Write a program to check whether a given character is an alphabet (uppercase) , an alphabet (lowercase),a digit or a special character.
// #include <stdio.h>
// int main()
// {
//     int temp;
//     char a;
//     printf("Enter character:");
//     scanf("%c", &a);
//     printf("%d", a);
//     temp = a;
//     if (temp >= 65 && temp <= 90)
//     {
//         printf("%c is Uppercase\n", a);
//     }
//     if (temp >= 97 && temp <= 122)
//     {
//         printf("%c is Lowercase", a);
//     }
//     if (temp >= 48 && temp <= 57)
//     {
//         printf("%c is digit", a);
//     }
//     if((temp>=32&&temp<=47)||(temp>=58&&temp<=64)||(temp>=91&&temp<=96)||(temp>=123&&temp<=126))
//     {
//         printf("%c is special character", a);
//     }
//     return 0;
// }