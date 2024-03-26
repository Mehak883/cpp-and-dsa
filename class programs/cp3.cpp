#include<iostream>
using namespace std;

int main(){
    int a[10];
int n,i,beg ,end,mid,ans;
cout<<"enter n : ";
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
beg=0,end=n-1;
while(beg<=end){
mid=(beg+end)/2;
if(a[mid-1]<a[mid]){
    if(a[mid]>a[mid+1]){
    ans=a[mid];
    break;
    }
    else {
beg = mid+1;
    }
}
else{
end=mid;
}
}
cout<<ans;
    return 0;
}