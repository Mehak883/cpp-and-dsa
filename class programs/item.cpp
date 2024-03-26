#include <iostream>
using namespace std;
class item
{
private:
    int a, b;     // instance member var    //by-default garbage val
    static int k; // static member variable
public:
const int l=90;
    item(){
        k++;
    } 
    // void setA(int x) { a = x; }
    // void setB(int y) { b = y; }
    // int getA() { return a; }
    // int getb() { return b; }
    static void setK(int z) { k=z; }
    static int getk() { return k; }
void constan()const{
    cout<<l<<endl;
}
};
int item ::k=1;
int main()
{
    item i1,i2,i3;
    // item i1, i2;
    // i1.setA(5);
    // cout << "a = " << i2.getA(); // garbage value;
 //   item::setK(7);
i1.constan();
    // i1.k=0;
    //  item::k=4;
    //  cout<<"\nk= "<<item::k;
    cout << "\nk = " << item::getk(); //
    cout << endl;
    return 0;
}