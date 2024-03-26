#include<iostream>
using namespace std;

int main(){
    int a[] = {4, 1, 3, 9, 6};

   int sum = 0;

   for(int i = 0; i < 5; i++) {

       if(i % 2 == 0) {

           sum += a[i];

       }

  else

{ if(i/2==0)

 sum+=a[i];

}

   }

   cout << sum << endl;
    return 0;
}