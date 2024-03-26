// #include <iostream>
// using namespace std;
// template <class T,class F=int,class P=int>
// P add(T x, F y)
// {
//     return (x + y);
// }
// int main()
// {
// float sum = add<float,int,float>(2.5, 3.3);
// int sum3 = add<int>(2, 3);
//     cout << "sum is " << sum<<endl;
//     cout << "sum is " << sum3<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
template<class T>
T find(T x,T y){
return (x>y)?x:y;
}
int main(){
    int x,y;
    cout<<"enter 2 no : ";
    cin>>x>>y;
    cout<<"ans is  : "<<find<char>('d','h');
      cout<<"\nans is  : "<<find<int>(x,y);
    return 0;
}