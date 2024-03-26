#include<iostream>
using namespace std;

int main(){
    int item, i,n,a[10],beg,end,mid,flag=0;
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\nenter an item : ";
cin>>item;
beg=0;
end=n-1;
while(beg<=end){
    mid=(beg+end)/2;
if(a[mid]==item){
    flag=1;
    break;
}
else if(item<a[mid]){
    end=mid-1;
}

else{
    beg=mid+1;
}
}
if(flag==1){
    cout<<item<<" is found at location "<<mid+1;
}
else{
    cout<<"item not found !!";
}
    return 0;
}