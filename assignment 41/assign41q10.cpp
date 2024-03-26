// 10. Given an array, print the Next Greater Element (NGE) for every element using stack.
// Example:
// Input: arr[] = [ 4 , 5 , 2 , 25 ]
// Output: 4 –> 5
// 5 –> 25
// 2 –> 25
// 25 –> -1
#include<iostream>
#include<stack>
using namespace std;
  
int main(){
    int arr[4];
    int i,flag=0;
    int j;
    stack<int> s1;
    for(i=0;i<4;i++){
cin>>arr[i];
}
for(i=3;i>=0;i--){
    s1.push(arr[i]);
}
j=1;
while(j<4){
for(i=j;i<4;i++){
if(s1.top()<arr[i]){
    flag=0;
cout<<s1.top()<<" -> "<<arr[i]<<"\n";
s1.pop();
break;
}
else{
flag=1;
}
}
if(flag==1){
   cout<<s1.top()<<" -> "<<"-1 \n";
   s1.pop();  
}
    j=j+1;
}
 if(j==4){
        cout<<s1.top()<<" -> "<<"-1 \n";
    }

    return 0;
}