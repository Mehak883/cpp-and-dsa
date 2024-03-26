/* 8. Define a class Bank and define member functions to read principal , rate of interest and year. Another member functions to
 calculate simple interest and display it. Initialise all details using constructor.*/
#include <iostream>
using namespace std;
class bank
{
    int principal, rate, time;

public:
    bank(int p, int r, int t)
    {
        principal = p;
        rate = r;
        time = t;
    }
    int calculation()
    {
        int si;
        si = principal * rate * time;
        return si;
    }
    void display(int si)
    {
        cout << "simple interest : " << si;
    }
};
int main()
{
    int simple_interst;
    bank b1(1000, 4, 2);
    simple_interst = b1.calculation();
    b1.display(simple_interst);
    return 0;
}