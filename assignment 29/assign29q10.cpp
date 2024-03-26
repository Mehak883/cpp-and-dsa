// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to Dollar and Dollar to Rupee conversion.
// Example-
// int main()
// {
// Rupee r = 23;
// Dollar d = r; // Rupee to Dollar conversion
// d.display();
// r.display();
// r = d; // Dollar to Rupee Conversion
// d.display();
// r.display();
// return 0;
// }
#include<iostream>
using namespace std;
class dollar{
 int x;
    public:
    dollar(){
        x=0;
    }
dollar(int x){
this->x=x;
}
void display(){
    cout<<x<<endl;
}
int getx(){
    return x;
}
};
class rupee{
 int x;
    public:
rupee(int x){
this->x=x;
}
rupee(dollar d){
x=100*d.getx();
}
operator int(){
    return x;
}
operator dollar(){
    return x/100;
}
void display(){
    cout<<x<<endl;
}
};
int main(){
    rupee r=100;
dollar d=r;
d.display();
r=d;
 r. display();  
    return 0;
}