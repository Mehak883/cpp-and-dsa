// //Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
// #include <stdio.h>
// int main()
// {
//     int s1, s2, s3, a, b, c;
//     printf("enter first side : ");
//     scanf("%d", &s1);
//     printf("\nenter second side : ");
//     scanf("%d", &s2);
//     printf("\nenter third side : ");
//     scanf("%d", &s3);
//     if (s1 > 0 && s2 > 0 && s3 > 0)
//     {
//         if (((s1 + s2) > s3) || ((s1 + s3) > s2) || ((s2 + s3) > s1))
//         {
//             printf("\n triangle is valid");
//         }

//         else
//         {
//             printf("\nall conditions are false,so triangle is not valid");
//         }
//     }
//     else
//     {
//         printf("\ninput is not coreect,so triangle is not valid");
//     }
//     return 0;
// }