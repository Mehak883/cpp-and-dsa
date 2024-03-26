// 4. Define a class Counter and Write a program to Show Counter using Constructor
#include <iostream>
using namespace std;
class counter
{
    int count;

public:
    counter(int x)
    {
        count = x;
        cout << count;
    }
};
int main()
{
    counter c(4);
    return 0;
}