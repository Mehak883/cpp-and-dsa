// #include<iostream>
// #include<set>
// #include<iterator>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> s;
s.insert("mehak");
s.insert("anil");
s.insert("dhawan");

unordered_set<string>::iterator x;
for(x=s.begin();x!=s.end();x++){
cout<<*x<<"  ";
}
cout<<endl;
string key="anil";
if(s.find(key)==s.end()){
    cout<<" not found";
}
else{
    cout<<"found";
}
    return 0;
}