// 8. Create a Rupee class and convert it into int. And Display it.
// Example-
// int main()
// {
// Rupee r = 10;
// int x = r;
// cout<<x;
// return 0;
// }
#include<iostream>
using namespace std;
class rupee{
 int x;
    public:
rupee(int x){
this->x=x;
}
operator int(){
    return x;
}

};
int main(){
rupee r=10;
int x=r;
cout<<x;    
    return 0;
}