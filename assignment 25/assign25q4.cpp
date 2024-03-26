// Define a class LargestNumber and define an instance member function to find the Largest of three Numbers
// using the class.
#include <iostream>
using namespace std;
class largestnumber
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
void largestnumber ::display()
{
    int large;
    large = a > b && a > c ? a : b > c ? b  : c;
    cout << large << " is greater";
}
int main()
{
    largestnumber l1;
    l1.set_data();
    l1.display();
    return 0;
}