// 7. Create a base class called Matrix. Use this class to store 4 int type values that could be used to calculate determinants and
// create matrices. Create class calculate_determinant which will calculate the determinant of a matrix.
#include <iostream>
using namespace std;
class matrix
{
    protected:
    int a, b, c, d;

public:
    void getdata()
    {
        cout << "enter matrix value : ";
        cin >> a >> b >> c >> d;
    }
    void display()
    {
        cout << a << " " << b;
        cout << "\n"
             << c << " " << d;
    }
    virtual void calc_determinant() = 0;
};
class calculate_determinant:public matrix
{
public:
    void calc_determinant()
    {
       int det= (a*d)-(b*c);
       cout<<"\ndeterminant : "<<det;
    }
};
int main()
{ 

    calculate_determinant c1;
 matrix *m;
m=&c1;
    m->getdata();
    m->display();
    m->calc_determinant();
    return 0;
}