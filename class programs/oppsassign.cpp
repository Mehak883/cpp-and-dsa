// 10. Write a function in C to count the frequency of each element of an array.
#include <iostream>
using namespace std;
void voting(int *arr, int n1);
int main()
{
    int i, n1, arr[50];
    cout << "enter no of voters : ";
    cin >> n1;
    cout << "enter \"1\" for candidate 1\n";
    cout << "enter \"2\" for candidate 2\n";
    cout << "enter \"3\" for candidate 3\n";
    cout << "enter \"4\" for candidate 4\n";
    cout << "enter \"5\" for candidate 5\n";
    for (i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }
    voting(arr, n1);
    return 0;
}
void voting(int arr[50], int n)
{

    static int c = 0;
    int count[n], duplicate = 0, j, i;
    for (i = 0; i < n; i++)
    {
        count[i] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        int count_no = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count_no++;
                count[j] = duplicate;
            }
        }
        if (arr[i] > 5)
        {
            c++;
        }
        if (count[i] != duplicate && count[i] < 6)
        {
            count[i] = count_no;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (count[i] != duplicate && arr[i] < 6)
        {
            cout << "votes  of candidate " << arr[i] << " is " << count[i] << endl;
        }
    }
    cout << "spoilt votes are " << c << endl;
}