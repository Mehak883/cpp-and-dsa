#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int devise(int dividend,int divisor){
if(dividend==0){
   return 0;
}
if(divisor==0){
   cout<<"\nwrong input ";
}
int sign=(dividend<0)^(divisor<0);
dividend=abs(dividend);
divisor=abs(divisor);
if(divisor==1){
   return((sign==0?dividend:-dividend));
}
int ans=exp(log(dividend)-log(divisor))+0.0000000001; 
return ((sign==0)?ans:-ans);
}
int main(){
   int num[]={1,0,3,0};
   int ans[10],size =4,countzero=0,mul=1;
   for(int i=0;i<size;i++){
     if(num[i]==0){
      countzero++;
     }
      else{
mul=num[i]*mul;
       }
   }
   for(int i=0;i<size;i++){
      if(countzero==0){
ans[i]=devise(mul,num[i]);
      }
      if(countzero>1){
         ans[i]=0;
      }
      if(countzero==1){
         if(num[i]!=0){
            ans[i]=0;
         }
else{
   ans[i]=mul;
}
      }   

   }
   for(int i=0;i<size;i++){
      cout<<ans[i]<<"  ";
   }
   return 0;
}