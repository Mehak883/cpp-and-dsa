// 11. Create a class Marks that have one member variable marks and one member function that will print marks. We know that
// we can access member functions using (.) dot operator. Now you need to overload (->) arrow operator to access that
// function.
#include<iostream>
using namespace std;
class marks{
int mark;
public:
marks(){};
marks(int m){
    mark=m;
}
void display(){
cout<<mark;
}
marks &operator->() {
    marks *m;
     m->display();
     return *m;
}
}
;
int main(){
 marks m(7);

 m->display();   
    return 0;
}