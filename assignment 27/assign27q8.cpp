// 8. Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.
#include <iostream>
using namespace std;
class matrix
{
    int a[3][3];

public:
    int i, j;

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
    friend matrix operator-(matrix m);
};
matrix operator-(matrix m)
{
    for (m.i = 0; m.i < 3; m.i++)
    {
        for (m.j = 0; m.j < 3; m.j++)
        {
            m.a[m.i][m.j] = -m.a[m.i][m.j];
        }
    }
    return m;
}
int main()
{
    matrix m1, m2;
    m1.set();
    m1.display();
    m2 = -m1;
    m2.display();
    return 0;
}