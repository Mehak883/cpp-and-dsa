#include <iostream>
using namespace std;
int partion(int a[],int l,int h,int pivot){
int i,j;
i=l;
j=h;
int t;
while(i<j){
    while (a[i]<=pivot)
    {
        i++;
    }
      while (a[j]>=pivot)
    {
        j--;
    }
if(i<j){
    cout<<"done";
    t=a[i];
    a[i]=a[j];
    a[j]=t;
}
}
t=pivot;
pivot=a[j];
a[j]=t;
return j;
}
void quicksort(int a[],int l,int h){
    int neew,i,pivot=a[l];
    if(l<h){
        neew=partion(a,l,h,pivot);
        quicksort(a,l,neew-1);
        quicksort(a,neew+1,h);
    }
}
int main()
{
   int a[10],i,j,l_b,u_b,n=5;
   l_b=0;
   u_b=n-1;
   for(i=0;i<5;i++){
    cin>>a[i];
   }
quicksort(a,l_b,u_b);
 
    cout<<"\n\n";
      for(i=0;i<5;i++){
    cout<<a[i]<<" ";
    }
    return 0;
  }