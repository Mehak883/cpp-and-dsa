#include<iostream>
using namespace std;

int main(){
    char *t="mehakdhawan";
    char *p="ake";
    int flag=0;
    int n=11,m=3;
    for(int i=0;i<=n-m;i++){
        int j=0;
        while(j<m&&t[i+j]==p[j]){
            j++;         
        }
        if(j==m){
           flag=1;
           break; 
        }
    }
if(flag==1){
    cout<<"pattern found";
}
else{
      cout<<"pattern not found";
}
    return 0;
}