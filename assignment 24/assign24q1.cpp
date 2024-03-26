// 1. Define a function to check whether a given number is a Prime number or not.9
#include <iostream>
using namespace std;
void prime_factor(int n);

int main()
{
    int num;
    cout << "enter a number";
    cin >> num;
    prime_factor(num);
    return 0;
}
void prime_factor(int n)
{
    int flag, r, ans, i = 2;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is not a prime number";
    }
}