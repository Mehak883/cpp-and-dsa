#include <iostream>
#include <array>
#include <tuple>
using namespace std;

int main()
{
    array<int, 8> a1;
    int i;
    for (i = 0; i < a1.size(); i++)
    {
        cin >> a1[i];
    }
    cout << endl;
    int count, c = 0;
    for (i = 0; i < a1.size(); i++)
    {
        c = 0;
        if (a1[i] != -1)
        {
            count = a1[i];
        }
        else
        {
            continue;
        }

        for (int j = i + 1; j < a1.size(); j++)
        {
            if (count == a1[j])
            {
                c++;
                a1[j] = -1;
            }
        }
        if ((c + 1) % 2 != 0 || c == 0)
        {
            cout << count << " ";
        }
    }
    return 0;
}