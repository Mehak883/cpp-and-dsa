//3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include <stdio.h>
int main()
{
    int n;
    printf("1. SUNDAY\n2. MONDAY\n3. TUESDAY\n4. WEDNESDAY\n5. THURSDAY\n6. FRIDAY\n7. SATURDAY\n");
        printf("\nenter a number respective to month,you want to enter : ");
        scanf("%d",&n);
switch (n)
{
case 1:
printf("HAVE A NICE DAY ");
 break;
 case 2:
printf("GOOD LUCK");
break;
case 3:
printf("ALL THE BEST ");
case 4:
break;
printf("WISHING YOU A GREAT DAY AHEAD");
break;
case 5:
printf("MAY GOD BLESS YOU ");
break;
case 6:
printf("NAMASTE ");
break;
case 7:
printf("I HOPE YOUR DAY GOES WELL ");
    break;
default:
exit(0);
    break;
}
         return 0;
}