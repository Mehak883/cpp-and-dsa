0// 9. Write a program to check whether a given number is an Armstrong number or not.
#include <stdio.h>
int main()
{
  int n, temp = 0, r, rev = 0;
  printf("enter a no : ");
  scanf("%d", &n);
  temp = n;
  while (temp > 0)
  {
    r = temp % 10;
    temp = temp / 10;
    rev = rev + r * r * r;
  }
  if (n == rev)
  {
    printf("%d is an armstrong number", n);
  }
  else
  {
    printf("%d is not an armstrong number", n);
  }
  return 0;
}