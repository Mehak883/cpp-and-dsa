#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int ,5>nums;
    array<int ,5>answer;
    int i,j,pro=1;
   for(i=0;i<nums.size();i++){
    cin>>nums[i];
   }
    for(i=0;i<answer.size();i++){
        pro=1;
for(j=0;j<nums.size();j++)
{
if(i!=j){
pro=pro*nums[j];
}
}        
answer[i]=pro;
cout<<answer[i]<<" ";
    }
    
    return 0;
}