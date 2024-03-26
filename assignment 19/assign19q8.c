/*8. Given a list of words followed by two words, the task is to find the minimum distance between the given two
 words in the  list of words. (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”,
 OUTPUT : 1 )*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][10], s[10], s1[10];
    int v = 0, l, i, k, j, n, flag = 0;
    printf("enter number of elements : ");
    scanf("%d", &n);
    printf("enter elements : ");
    for (j = 0; j < n; j++)
    {
        scanf("%s", a[j]);
    }
    printf("\n");
    printf("\nenter two sring from list : ");
    fflush(stdin);
    gets(s);
    gets(s1);
    for (j = 0; j < n; j++)
    {
        if (strcmp(s, a[j]) == 0)
        {
            l = j;
        }
        if (strcmp(s1, a[j]) == 0)
        {
            k = j;
        }
    }
    printf("\ndifference between these strings : %d", k - l);
    printf("\n");
    return 0;
}