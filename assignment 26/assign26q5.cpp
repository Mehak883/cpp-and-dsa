// 5. Define a class Date and write a program to Display Dateand initialise date object using Constructors.
#include <iostream>
using namespace std;
class date
{
    int day;
    int month;
    int year;

public:
    date(int x, int y, int z)
    {
        day = x;
        month = y;
        year = z;
    }
    void display()
    {
        cout << day << "/" << month << "/" << year;
    }
};
int main()
{
    date d1(5, 1, 2004);
    d1.display();
    return 0;
}