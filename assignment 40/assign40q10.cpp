#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a[10], b;
    deque<string> s1;
    deque<string>::iterator it;
    int i,flag=0;
for( i =0;i<=4;i++){
    getline(cin,a[i]);
    s1.push_back(a[i]);
}
    getline(cin,b);
    for (i=0; i<=4; i++)
    {
        if(b==s1.at(i)){
            cout<<"same  "<<endl;
break;
        }
        else{
        flag=1;
        }
    }
    if(flag==1){
        cout<<"no same";
    }
    return 0;
}