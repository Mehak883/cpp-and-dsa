#include <iostream>
using namespace std;
class item
{
private:
    int a, b;

public:
    friend void f1(item);
    void set_data(int x,int y){a=x;b=y;};
};
class a{
    public :
friend void f1();
};
void f1(item i) // without membership label
{
    int c=i.a+i.b;
cout<<c;
}

int main()
{
    item i1;
    a obj;
    i1.set_data(3,4);
    f1(i1);
    cout << endl;
    return 0;
}