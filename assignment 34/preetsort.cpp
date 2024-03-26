#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class item{
   int code;
   char name[50];
   long int price;
   public:
   item(){
    code=0;
    strcpy(name,"no input");
    price=0;
   }
   void setdata(){
    cout<<"---------------------------------"<<endl;
    cout<<"Enter code (6-digit) of item :"<<endl;
    cin>>code;
    cout<<"Enter name of the item :"<<endl;
    cin>>name;
    cout<<"Enter the price of the item :"<<endl;
    cin>>price;
    cout<<"---------------------------------"<<endl;
   }
   void display(){
    cout<<"---------------------------------"<<endl;
    cout<<"Code of a item is  :"<<code<<endl;
    cout<<"Name of a Item is  :"<<name<<endl;
    cout<<"Price of a item is :"<<price<<endl;
    cout<<"---------------------------------"<<endl;
   }
   void storedata(); 
   friend void sort(item * i, int n)  ;
   void readdata(); 
};
void sort(item * T, int n)   
{
    int temp;
     for(int i = 0; i < n - 1; i++)
     {
          for(int j = 0; j < n - 1 - i; j++)
          {
               if(T[j].price < T[j + 1].price)
               {
                    temp = T[j].price;
                    T[j].price = T[j + 1].price;
                    T[j + 1].price = temp;
               }
          }
     }
     cout<<"List is now sorted "<<endl;
}

void item :: storedata(){
    fstream fout;
    fout.open("item.txt",ios::in|ios::out|ios::app);
    if(!fout){
        cout<<"File does not created"<<endl;
    }
    else
    {   //cursor become changed so we reset the pos of pointer
        fout.seekg(0, ios::beg);
        fout.clear();
        //writing from setdata at the beg of pointer
        fout.write((char *)this,sizeof(*this));
        //reading that data from same file
        fout.read((char *)this,sizeof(*this));
        display();
        fout.close();
    }
}
int main(){
     int n,i;
     cout<<"Enter total number of records:"<<endl;
     cin>>n;
     item i1[n];
     for (i = 0; i < n; i++)
     {
        i1[i].setdata();    
     }
     sort(i1,n);
     for ( i = 0; i < n; i++)
     {
        i1[i].storedata();
     }
     return 0;
}