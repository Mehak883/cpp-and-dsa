//7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.
#include <iostream>
using namespace std;
class greatest
{
    int a, b, c;

public:
    void set_data()
    {
        cout << "enter a,b and c : ";
        cin >> a >> b >> c;
    }
    void display();
};
void greatest ::display()
{
    int large;
    large = a > b && a > c ? a : b > c ? b  : c;
    cout << large << " is greater";
}
int main()
{
    greatest g1;
    g1.set_data();
    g1.display();
    return 0;
}