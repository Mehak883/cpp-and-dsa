// 5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using
//  class.
#include <iostream>
using namespace std;
class reversenumber
{
    int num;

public:
    void set_data()
    {
        cout << "enter a num : ";
        cin >> num;
    }
    void display()
    {
        int rev, temp, r=0;
        temp = num;
        while (num > 0)
        {
            rev = num % 10;
            num = num / 10;
            r = (r * 10) + rev;
        }
        cout << "reverse of " << temp << " is " << r;
    }
};
int main(){
    reversenumber r1;
    r1.set_data();
    r1.display();
    return 0;
}