// 8. Given a string s of length N, containing digits written in words but in jumbled form, the  task is to find out the digits present in 
// the string in word form and arrange them in sorted order using map
// Example:
// Input: s = “ozerotwneozero”
// Output: 0012
// Explanation: The string can be arranged as “zerozeroonetwo”.
// Therefore the digits are 0, 0, 1 and 2.
#include<bits/stdc++.h>
using namespace std;

int main(){
map<char,int> m1;
map<char,int> ::iterator it;
string s1;
getline(cin,s1);
for(int i=0;i!=s1.size();i++){
m1[s1[i]]++;
}
string ans;
for(it=m1.begin();it!=m1.end();it++){
    cout<<it->first<<"  "<<it->second<<"\n";
}
while(m1['z']&&m1['e']&&m1['r']&&m1['o']){
    m1['z']--;
    m1['e']--;
    m1['r']--;
    m1['o']--;
ans=ans+'0';
}
while(m1['o']&&m1['n']&&m1['e']){
    m1['o']--;
    m1['n']--;
    m1['e']--;
ans=ans+'1';
}
while(m1['t']&&m1['w']&&m1['o']){
    m1['t']--;
    m1['w']--;
    m1['o']--;
ans=ans+'2';
}
while(m1['t']&&m1['h']&&m1['r']&&m1['e']&&m1['e']){
    m1['t']--;
    m1['h']--;
    m1['r']--;
    m1['e']--;
    m1['e']--;
ans=ans+'3';
}
while(m1['f']&&m1['o']&&m1['u']&&m1['r']){
    m1['f']--;
    m1['o']--;
    m1['u']--;
    m1['r']--;
ans=ans+'4';
}
while(m1['f']&&m1['i']&&m1['v']&&m1['e']){
    m1['f']--;
    m1['i']--;
    m1['v']--;
    m1['e']--;
ans=ans+'5';
}
while(m1['s']&&m1['i']&&m1['x']){
    m1['s']--;
    m1['e']--;
    m1['x']--;
ans=ans+'6';
}
while(m1['s']&&m1['e']&&m1['v']&&m1['e']&&m1['n']){
    m1['s']--;
    m1['e']--;
    m1['v']--;
    m1['e']--;
    m1['n']--;
ans=ans+'7';
}
while(m1['e']&&m1['i']&&m1['g']&&m1['h']&&m1['t']){
    m1['e']--;
    m1['i']--;
    m1['g']--;
    m1['h']--;
    m1['t']--;
ans=ans+'8';
}
while(m1['n']&&m1['i']&&m1['n']&&m1['e']){
    m1['n']--;
    m1['i']--;
    m1['n']--;
    m1['e']--;
ans=ans+'9';
}

cout<<"\nans is  -> "<<ans;
    return 0;
}