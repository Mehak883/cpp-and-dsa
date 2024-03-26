#include<iostream>
using namespace std;

int main(){
      int a[10], n, i, j, item ,flag=0,beg,end,mid;
    cout << "enter n: \n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\nentered elements are : \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    cout<<"item to be searched is : ";
    cin>>item;
    beg=0;
    end=n-1;
   while(beg<=end){
        mid =(beg+end)/2;
        if(item==a[mid]){
            flag=1;
            break;
        }
           else if(item>a[mid]){
                beg=mid+1;
            }
        else{
           end=mid-1; 
        }
    }
    if(flag==1)
{
    cout<<item <<" is present at "<<mid+1;
}    
else{
    cout<<item<<" is not found !!";
}
return 0;
}