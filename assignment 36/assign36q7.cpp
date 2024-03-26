#include<iostream>
#include<algorithm>
#include<array>
#include<iterator>
using namespace std;

int main(){
    array<int ,5> a1;
    int i;
  for (i = 0; i < a1.size(); i++)
    {
        cin >> a1[i];
    }
    sort(a1.begin(),a1.end());
    for (i = 0; i < a1.size(); i++)
    {
        cout<< a1[i];
    }

    return 0;
}