// 2. Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)

#include <iostream>
using namespace std;
class time
{
    int s, m, h;

public:
    void setTime(int x, int y, int z)
    {
        h = x;
        m = y;
        s = z;
    }
    void showTime()
    {
        cout << h << " : " << m << " : " << s;
    }
    void normalize()
    {
        if(s>60){
            if(m>60){
                h++;
                m=m-60;    
            }
            else
            m++;
            s=s-60;
        }
        if(m>60){
            h++;
            m=m-60;
        }
    }
    time add(time t)
    {
        time temp;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;
        return temp;
    }
};
int main(){
    time t1,t2,t3;
    t1.setTime(1,60,62);
    t2.setTime(2,5,45);
    t3=t1.add(t2);
    t3.normalize();
    t3.showTime();
    return 0;
}