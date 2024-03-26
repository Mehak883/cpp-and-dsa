// 4. Manage a queue for multiple input and store in ascending order of his first character
#include <bits/stdc++.h>
using namespace std;
int main()
{
string s="mehak";
sort(s.begin(),s.end());
queue<char>q;
int i;
char s1;
for(i=0;i!=s.length();i++){
s1=s.at(i);
q.push(s1);
}
while(!q.empty()){
    cout<<q.front();
    q.pop();
}
    return 0;
}