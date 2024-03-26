#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1[6];
    int i;
  for (i = 0; i < 5; i++)
    {
        cin >> a1[i];
    }
    sort(a1,a1+5,greater<int>());
    for (i = 0; i < 5; i++)
    {
        cout<< a1[i];
    }

    return 0;
}