#include<iostream>
using namespace std;
void merge(int a[],int s1,int e1,int s2,int e2){
int temp[50],i=s1,j=s2,k=0;
while(i<=e1&&j<=e2){
    if(a[i]<a[j]){
        temp[k]=a[i];
        i++;
        k++;
    }
    else{
   temp[k]=a[j];
        j++;
        k++;
    }
}
    while(i<=e1){
       temp[k]=a[i];
        i++;
        k++;   
    }
     while(j<=e2){
       temp[k]=a[j];
        j++;
        k++;   
    }
    for(k=0,i=s1;i<=e2;i++,k++){
        a[i]=temp[k];
    }
}

void mergesort(int a[],int i,int j){
int mid =(i+j)/2;
if(i<j){
    mergesort(a,i,mid);
    mergesort(a,mid+1,j);
    merge(a,i,mid,mid+1,j);
}
}
int main(){
     int i,n,a[30];
    cout<<"enter n :";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
             }
    return 0;
}
