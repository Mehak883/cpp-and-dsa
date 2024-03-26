//3. Overload subscript operator [] that will be useful when we want to check for an index out of bound.
#include <iostream>
using namespace std;
class array
{
    int a[10];
    const int size = 10;

public:
    array(){};
    void setarray(int n, int index)
    {
        a[index] = n;
    }
    void display(int index)
    {
        cout << a[index] << " ";
    }
    int operator[](int index)
    {
        if (index > size)
        {
            cout << "\narray index out of bound expection" << endl;
            exit(0);
        }
        return a[index];
    }
};
int main()
{
    array b;
    b.setarray(5, 6);
    b.display(6);
    cout << b[12]; 
    return 0;
}