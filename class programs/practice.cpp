#include<iostream>
using namespace std;
int main(){
    int a[10];
    int i,j,temp;
    cout<<"wnter";
    for( i=0;i<5;i++){
        cin>>a[i];
    }
        for(i=0;i<5;i++){
        cout<<a[i];
    }
    for( i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"\n\n\n";
    for(i=0;i<5;i++){
        cout<<a[i];
    }
    return 0;
}