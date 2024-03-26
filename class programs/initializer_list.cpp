#include<iostream>
using namespace std;
class abc{
    int x;
    public:
    abc(int a){
        x=a;
    }
    void display(){
        cout<<"  "<<x<<endl;
    }
};
class ilist{
int x;
const int y;
int &z;
abc a1;
public:
// ilist(int a,int b):x(printf("mehak")),y(printf("hi what are you doing"))
// {
//     printf("5\n");
// }
ilist(int x,int b):x(x),y(b),z(x),a1(5)
{
//   x=a;
//   y=b;
}
void display(){
    cout<<x<<"  "<<y<<"  "<<z<<endl;
    a1.display();
}
};
int main(){
ilist il1(4,5);
ilist il2(9,7);
il1.display();
il2.display();
abc a2(6);
a2.display();
    return 0;
}