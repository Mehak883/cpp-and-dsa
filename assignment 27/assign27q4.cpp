// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.
#include <iostream>
using namespace std;
class time
{
    int hour, min, sec;
public:
    time operator>>(time t)
    {
        cout << "enter hours : ";
        cin >> t.hour;
        cout << "enter minutes : ";
        cin >> t.min;
        cout << "enter seconds : ";
        cin >> t.sec;
        return t;
    }
    void operator<<(time t)
    {
        cout << "hours : " << t.hour;
        cout << "\nminutes : " << t.min;
        cout << "\nsecomds : " << t.sec;
    }
    void operator==(time t)
    {
        if (hour == t.hour && min == t.min && sec == t.sec)
        {
            cout << "\ntime are same ";
        }
        else
        {
            cout << "\ntime are not same ";
        }
    }
};
int main()
{
    time t1, t2, t5, t6,cin1,cout1;
    cout << "enter first time \n";
    t5 = cin1>>(t1);
    cout << "first time \n";
    cout1<<(t5);
    cout << "enter second time \n";
    t6 = cin1>>(t2);
    cout << "second time \n";
    cout1<<(t6);
    t5 == t6;
    return 0;
}