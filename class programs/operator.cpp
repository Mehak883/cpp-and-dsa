#include <iostream>
using namespace std;
class time
{

    int hour, min;

public:
    time()
    {
    }
    time(int h, int m)
    {
        hour = h;
        min = m;
    }
    int operator>(time t)
    {
        if (hour > t.hour)
        {
            return 1;
        }
        else
        {
            if (hour == t.hour)
            {
                if (min > t.min)
                {
                    return 0;
                }
                    return 0;
            }
        }
    }
    void display()
    {
        cout << "hour  :  " << hour << "  ,  min  :  " << min << endl;
    }
};
int main()
{
    time t1(5, 5);
    time t2(10, 30);
  
    if (t1 > t2==1)
    {
        cout << "hello" << endl;
    }
    else
    {
        cout << "welcome" << endl;
    }
    t1.display();
    t2.display();
    return 0;
}