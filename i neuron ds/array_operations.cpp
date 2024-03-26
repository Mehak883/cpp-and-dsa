#include<iostream>
using namespace std;
class array{
   int a[20];
   int size =0;
    public:
void insert(int index,int value){
a[index]=value;
size++;
}
int get(int index){
    return a[index];
}
int getsize(){
    return size;
}
int search(int value){
    for(int i=0;i<size;i++){
        if(a[i]==value){
            return i;
        }
    }
    return -1;      //element not found
}
void delete_arr(int index){
for(int i=index;i<size-1;i++){
    a[i]=a[i+1];
}
a[size-1]=0;
size--;
}
void printarr(){
    for(int i=0;i<size;i++){
cout<<a[i]<<"  ";
    }  
}
};
int main(){
    int n,x;
    array a;
    cout<<"enter a no : ";
    cin>>n;
    cout<<"enter "<<n<<" elements : \n";
    for(int i=0;i<n;i++){
        cin>>x;
a.insert(i,x);
    }
        for(int i=0;i<a.getsize();i++){
cout<<a.get(i)<<"  ";
    }


    cout<<"\nenter element to search : " ;
    int item;
    cin>>item;
    int ans =a.search(item);
if(ans!=-1){
    cout<<"\nelement found at "<<ans+1;
}
else{
  cout<<" \nelement not found ";
}
 cout<<"\nenter index to del \n";
 cin>>x;
a.delete_arr(x-1);
a.printarr();
    return 0;
}