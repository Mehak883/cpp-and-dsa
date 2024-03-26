#include <iostream>
using namespace std;
int main()
{
    int a, t, r, num,flag, count, i;
    cout << "Enter a num : ";
    cin >> num;

    for (i = 0; i < 9; i++)
    {
        flag=0;
        t = num;
        count = 0;
        while (t > 0)
        {
            r = t % 10;
            t = t / 10;
            if (i == r)
            {
                count++;
                flag=1;
            }
        }
        if(flag==1){
        cout << i << " = " << count << endl;
    }
    }
    return 0;
}