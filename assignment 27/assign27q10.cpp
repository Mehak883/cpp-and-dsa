// 10.Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
// overloading).
#include <iostream>
using namespace std;
class matrix
{
    int a[3][3];
    int i, j;

public:
    void set()
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    matrix operator+(matrix m1)
    {
        matrix m;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                m.a[i][j] = a[i][j] + m1.a[i][j];
            }
            cout << endl;
        }
        return m;
    }
};
int main()
{
    matrix ma1, ma2, ma3;
    ma1.set();
    ma1.display();
    ma2.set();
    ma2.display();
    ma3 = ma1 + ma2;
    ma3.display();
    return 0;
}