// 1. Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>
int main()
{
    int n;
    printf("1. January\n2. February\n3. March\n4. April\n5. May\n6. June\n7. July\n8. August\n9. September\n10. October \n11. November\n12. Decamber");
        printf("\nenter a number respective to month,you want to enter : ");
        scanf("%d",&n);
switch (n)
{
case 1:
printf("this month have 31 days ");
 break;
 case 2:
printf("this month have 28 days");
break;
case 3:
printf("this month have 31 days ");
case 4:
break;
printf("this month have 30 days");
break;
case 5:
printf("this month have 31 days ");
case 6:
printf("this month have 30 days ");
break;
case 7:
printf("this month have 31 days ");
    break;
case 8:
printf("this month have 31 days");
break;
case 9:
printf("this month have 30 days ");
case 10:
printf("this month have 31 days");
break;
case 11:
printf("this month have 30 days ");
case 12:
printf("this month have 31 days ");
break;
default:
printf("enter valid input");
    break;
}
         return 0;
}