#include<iostream>
#include<array>
#include<tuple> //it is udes for get<>()
using namespace std;

int main(){
    int a[10];   //c style array
    array <int,5> ar;   //array using stl in c++
    array<int,5> ar2; 
    array<int,0> ar3;
    cout<<"first arr \n";
    for(int i=0;i<ar.size();i++){
        cin>>ar.at(i);
        //using operator []
        //cin>>ar[i];
    }
        cout<<"scnd arr \n";
    for(int i =0;i<ar2.size();i++){
        cin>>ar2[i];
    }
    cout<<"first arr disp \n";
    for (int i=0;i<ar.size();i++){
//        cout<<ar.at(i)<<" ";
cout<<ar[i]<<" "; 
}
    cout<<"second arr disp\n";
for(int i=0;i<ar2.size();i++){
    cout<<ar2[i]<<" ";
}
//using front and back()
cout<<"first element = "<<ar.front()+4<<endl;
cout<<"last element = "<<ar.back()<<endl;
 //using get<constatnt>objectx 
        cout<<"hello"<<get<1>(ar)<<" ";
    //using swap (ar2);   //it will swap two array of same 
    ar.swap(ar2);
    cout<<"\narr after swapping ";
      cout<<"\nfirst arr disp \n";
    for (int i=0;i<ar.size();i++){
//        cout<<ar.at(i)<<" ";
cout<<ar[i]<<" "; 
}
    cout<<"\nsecond arr disp\n";
for(int i=0;i<ar2.size();i++){
    cout<<ar2[i]<<" ";
}
//using empty func
if(ar2.empty()){
    cout<<"\narray 2 is empty ";
}
    else{
       cout<<"\narray 2 is not empty ";
 
    }
if(ar3.empty()){
    cout<<"\narray 3 is empty \n";
}
    else{
       cout<<"\narray 3 is not empty \n";
 
    }
    //using sort 
    //using fill func

  ar.fill(1);
  for(int i=0;i<ar.size();i++){
    cout<<ar[i]<<" ";
  }
  return 0;
}