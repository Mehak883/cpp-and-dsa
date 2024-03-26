// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include <iostream>
using namespace std;
class cube
{
    int side;

public:
    cube(int s)
    {
        side = s;
    }
    int function()
    {
        int result;
        result = side * side * side;
        return result;
    }
    void display(int t)
    {
        cout << "volume of cube is " << t;
    }
};
int main()
{
    cube c1(5);
    int ans;
    ans = c1.function();
    c1.display(ans);
    return 0;
}