#include <iostream>
using namespace std;
int main()
{
    int a1[10], a2[10], a3[20], i, j, m, n,k,l;
    cout << "enter n";
    cin >> n;
    cout << "enter m";
    cin >> m;
      cout << "enter first array";
    for(i=0;i<n;i++){
        cin>>a1[i];
    }
     cout << "\nenter second array";
    for(j=0;j<m;j++){
        cin>>a2[j];
    }
    i=0,j=0,k=0;
    while (i<=n&&j<=m)
    {
        if(a1[i]<a2[j]){
            a3[k]=a1[i];
            k=k+1;
            i=i+1;
        }
        else{
            a3[k]=a2[j];
            k=k+1;
            j=j+1;
        }
    }
    cout << "\nafter merge sort : ";
    while(i<n){
         a3[k]=a1[i];
            k=k+1;
            i=i+1;   
    }
    while(j<m){
    a3[k]=a2[j];
            k=k+1;
            j=j+1;
    }
    l=k;
    for(k=0;k<l;k++){
        cout<<a3[k]<<" ";
    }
    return 0;
}