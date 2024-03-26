#include <iostream>
using namespace std;
class array
{
    int a[100];
    const int size = 100;

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
    for(int i=0;i<5;i++){
    b.setarray(5, 6);
    b.display(6);
    cout << b[102]; // no match for 'operator[]' (operand types are 'array' and 'int')
    return 0;
}