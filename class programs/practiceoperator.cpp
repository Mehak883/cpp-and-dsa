#include <iostream>
#include <cstring>
using namespace std;
class practice
{
    int x;
    char *s;
    int size;

public:
    practice()
    {
        s = (char *)malloc(1);
        size = 1;
    };
    practice(char *str, int a)
    {
        size = strlen(s);
        s = (char *)malloc(size+1);
        strcpy(s, str);
        x = a;
    }
    practice(practice &p)
    {
        size = p.size;
        s = (char *)malloc(size+1);
        strcpy(s, p.s);
        x = p.x;
    }
    void display(){
        cout<<s<<endl;
        cout<<x<<endl;
    }
    void  change(char *str,int a){
strcpy(s,str);
x=a;
 }
 practice operator=(const practice &p){
    
    free(s);
    size=strlen(p.s);
    s=(char*)malloc(size+1);
    strcpy(s,p.s);
    x=p.x;
return *this;
 }
// practice operator+(practice p){
// practice s1;

//    strcpy(s1.s,(strcat(s,p.s)));
//    s1.x=x+p.x;
// return s1;
//}
};
int main()
{
    practice p1("mehak",5),p2=p1,p3,p4,p5;
 p1.display();
 p3=p1;
 p4=p3=p1;
//  p5=p1+p2;
p1.change("dhawan",3);
p1.display();
    p2.display();
    p3.display();
    p4.display();
    // p5.display();
    return 0;
}