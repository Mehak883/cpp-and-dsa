#include<iostream>
#include<unordered_map>
#include<iterator>
using namespace std;

int main(){
unordered_multimap<string,int> m({
    {"mehak",20},
     {"dhawan",40};
})
// m["mehak"]=2131883;
// m["gurpreet"]=2131851;
// m["jasmine"]=2131864;
//m["jasmine"]=2131868;
unordered_multimap<string,int>::iterator x;

for(x=m.begin();x!=m.end();x++){
cout<<"key : "<<x->first<<" , value : "<<x->second<<endl;
}

    return 0;
}