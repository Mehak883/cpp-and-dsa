/*6. Define a class Square to find the square of a number and write a C++ program to Count number of times a
function is called.*/
#include <iostream>
using namespace std;
class square
{
private:
    int num;
    int result;
    static int b;

public:
    void get_data();
    void calculation();
    void display();
};
int square::b=0;
void square::get_data()
{
    cout << "enter a num : ";
    cin >> num;
    b++;
}
void square::calculation()
{
    result = num * num;
    b++;
}
void square::display()
{
    cout << "suare of a " << num << " is " << result;

    cout << "\n " << b << " times a function is called.";
}
int main()
{
    square s1;
    s1.get_data();
    s1.calculation();
    s1.display();
    return 0;
}