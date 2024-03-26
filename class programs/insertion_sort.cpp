
#include<iostream>
using namespace std;

int main(){
    int p,temp,i,n,a[10];
    //a[0]=-5;
    cout<<"enter n :";
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
for(i=2;i<=n;i++){
temp=a[i];
p=i-1;
while(temp<a[p]&&p>=1){
    a[p+1]=a[p];
    p=p-1;
}
a[p+1]=temp;
}

for(i=1;i<=n;i++){
    cout<<a[i]<<" ";
}
    return 0;
}