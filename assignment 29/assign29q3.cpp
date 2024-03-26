/*3. Create a Product class and convert Product type to Item type using constructor
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
}*/
#include <iostream>
using namespace std;
class product
{
    int x, y;

public:
    void setdata(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int pdct()
    {
        return x * y;
    }
};
class item
{
    int a;

public:
    item(){};
    item(product p)
    {
        a = p.pdct();
    }
    void getdata()
    {
        cout << a << endl;
    }
};
int main()
{
    item i1;
    product p1;
    p1.setdata(4, 5);
    i1 = p1;
    i1.getdata();
    return 0;
}