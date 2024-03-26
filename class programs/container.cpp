#include <iostream>
using namespace std;
class first
{
    int x;
    public:
first(){
      cout <<"dc ";
}
first(int a):x(a)
{    
    cout<<"dc called";
}
void display(){
    cout<<x<<endl;
}
    class second
    {
        int y, z;       
    public:
    second(){};
        second(int b, int c) : y(b), z(c)
        {
        }
        void display(){
        first f1(6);
    f1.display();
            cout<<y<<endl<<z<<endl;
        }
        second operator+(first s){
          second s1;
          s1.y=y+s.x;
          s1.z=z+s.x;
          return s1;
        }
    };
};
int main()
{
    first f1(6);
first:: second s1(4,2),s2(5,6),s3;
s3=s1+f1;
s3.display();
    return 0;
}