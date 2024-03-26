/*9. Create an Integer class that contains int x as an instance variable and overload casting int() operator that will type cast your
 Integer class object to int data type.*/
#include <iostream>
using namespace std;
class integer
{
    int x;
public:
integer(){};
integer(int x){
this->x=x;
}
void display(){
    cout<<x;
}
operator int()
{
return x;
}
};
int main()
{
    int x;
    integer i1(5);
    x=i1;
    cout<<x;
    return 0;
}