// 3. Write a C++ program to calculate the percentage of a student using multi-level inheritance. Accept the marks of three subjects in
// base class. A class will be derived from the above mentioned class which includes a function to find the total marks obtained and
// another class derived from this class which calculates and displays the percentage of students.
#include <iostream>
using namespace std;
class first
{
    int oops, ds, cn;

public:
    void set_marks(int o, int d, int c)
    {
        oops = o;
        ds = d;
        cn = c;
    }
    int get_oops()
    {
        return oops;
    }
    int get_ds()
    {
        return ds;
    }
    int get_cn()
    {
        return cn;
    }
};
class second : public first
{
    int total_marks;

public:
    int total()
    {
        total_marks = get_cn() + get_ds() + get_oops();
        return total_marks;
    }
};
class third : public second
{
    int percentage;

public:
    void get_per()
    {
        percentage = total() / 3;
    }
    void display()
    {
        cout << percentage;
    }
};
int main()
{
    third t1;
    t1.set_marks(50, 50, 50);
    t1.get_per();
    t1.display();
    return 0;
}