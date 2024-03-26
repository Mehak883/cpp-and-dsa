#include <stdio.h>
int main()
{
    float k;
    int x = 5, y, z;
    int a = 11;
    int n = 4;
    y = ++x;
    a = sizeof('A');
    char b = ('r');
    printf("%d %d", y, x);
    printf("\n%d", sizeof(6.8f /*F*/));
    printf("\n%d", sizeof(short int));
    printf("\n%d", sizeof(long double));
    printf("\n%d", sizeof(long long int));
    printf("\n%d", sizeof(35));
    printf("\n%d", sizeof(a));
    printf("\n%d", sizeof(b));
    printf("\n%f", 3.0 / 4);
    printf("\n%d", 32 & 52);
    printf("\n%d", 35 | 52);
    printf("\n%d", 35 ^ 52);
    printf("\n%d", 12 << 3);
    printf("\n%d", 53 >> 2);
    printf("\n%d", !-5 > -2);
    printf("\n%d", x > 0);
    printf("\n%d", x < 0);
    return 0;
}