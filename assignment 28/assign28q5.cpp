//5. Create a student class and overload new and delete operators outside the class.
#include <iostream>
#include <cstring>
using namespace std;
class student
{
    char *name;
    int roll_no;
public:
student(){
name=new char[10];
}
    void setdata(int rno, const char s[])
    {
        roll_no = rno;
        strcpy(name, s);
    }
    void getdata()
    {
        cout << roll_no;
        cout << "\n"
             << name;
    }  
};
 void *operator new(size_t size)
    {
        void *p = malloc(size);
        return p;
    }
      void operator delete(void *s1)
    {
        free(s1);
    }
int main()
{
    student *s1 = new student;
    s1->setdata(24, "preet");
    s1->getdata();
    delete s1;
    return 0;
}