//4. Checks whether the set is empty or not.if it is empty insert 5 elements in the set
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s1;
    if(s1.empty()){
        int a;
          for (int i = 0; i < 5; i++)
    {
        cin >> a;
        s1.insert(a);
    }
    }
      for (auto it : s1)
    {
        cout << it << "  ";
    }
    return 0;
}