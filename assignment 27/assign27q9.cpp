// 9. Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).
#include <iostream>
#include <string.h>
using namespace std;
class mystring
{
    char str[20];

public:
    void inputdata()
    {
        cout << "enter your strings : ";
        cin.getline(str, 20);
    }
    mystring operator!()
    {
        mystring m;
        strcpy(m.str, str);
        if (strcmp(strlwr(m.str), str) == 0)
        {
            strupr(m.str);
        }
        else
        {
            if (strcmp(strupr(m.str), str) == 0)
            {
                strlwr(m.str);
            }
        }
        return m;
    }
    friend void display(mystring m);
};
void display(mystring m)
{
    cout << m.str;
}
int main()
{
    mystring m1, m2;
    m1.inputdata();
    m2 = m1.operator!();
    display(m2);
    return 0;
}