#include<iostream>
#include<vector>
#include<tuple>
#include<iterator>
using namespace std;

int main(){
    vector <int> v;
    vector<int> V2={2,4,5,6};
    vector<int> v3;
    v3.assign(5,19);
    
      for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    //     v.push_back(1);
cout<<endl;
    for(int i=0;i<6;i++){
    v.push_back(i+10);
        //v.push_back(i+10);
    }
    v.swap(V2);
    for(int i=0;i<V2.size();i++){
        cout<<V2[i]<<" ";
    }
    cout<<"\n";
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\nsize : "<<v.size();
     cout<<"\ncapacity : "<<v.capacity()<<endl;
   v.resize(3);
   v.shrink_to_fit();
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
  cout<<endl<<"\nsize : "<<v.size()<<endl;
   cout<<"capacity : "<<v.capacity()<<endl;
   if(v.empty()==true){
cout<<"vector is empty ";
   }
   else{
cout<<"vector is not empty \n";
   }
   //approach 1: 
   vector<int>::iterator x;   //just like int *p;
   //x=v.begin(); //returning start iterartor
   for(x=v.begin();x!=v.end();x++){
    cout<<*x;
       }
       cout<<"\n";
//    for(auto x=v.rbegin();x!=v.rend();x++){
//     cout<<*x<<" ";
//    }
//    for(auto x=v.rend();x!=v.rbegin();x--){
//     cout<<*x<<" ";
//    }
// x= v.end();  //returning last iterartor
//approach 2
cout<<"\n";
x=v.begin();
for(int i=0;i<v.size();i++){
//cout<<x[i]<<" ";  //also use this
cout<<*(x+i)<<" ";  
}

cout<<endl;
//aproach 3:
// x=v3.begin();
// x=v3.begin()+3;
x=v3.end();

v3.insert(x,12);
// v3.insert(v3.end(),12);
for(x=v3.begin();x!=v3.end();x++){
    cout<<*x<<" ";
   }
   x=v3.begin();
   cout<<"\n";

   //erase func 

v3.erase(x);
for(x=v3.begin();x!=v3.end();x++){
    cout<<*x<<" ";
   }
   cout<<"\n";
   cout<<v.at(2);
    return 0;
}