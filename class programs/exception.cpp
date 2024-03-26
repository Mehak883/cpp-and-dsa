#include <iostream>
using namespace std;
class my{
int hi;
public:
void f1(){
cout<<"0 error";
}
void f2(){
cout<<"1 error";
}
};
int main()
{
    my m;
    int a, b, c;
    cout << "enter 2 no's : ";
    cin >> a >> b;
    try
    {
        // if (b == 0)
        // {
        //     throw "divide by 0 error";
        // }
        //   if (b == 0)
        // {
        //     throw m.f1();
        // }
        if (b == 1)
        {
            throw b;
        }
          if (b == 2)
        {
            throw exception();
        }
              c = a / b;
        cout << "result = " << c;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    } // problem section
    catch (int x)
    {
        cout <<"mai hoon shaktiman "<<x << endl;
    } 
    catch(...){
        cout<<"jadeja is here than no fear ";
    }
    return 0;
}