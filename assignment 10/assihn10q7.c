//7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int fact(int);
int main(){
    int x,y,z,r,n,comb;
    printf("Enter items:");
    scanf("%d",&n);
    printf("Enter number of items selected at a time:");
    scanf("%d",&r);
    x=fact(n);
    y=fact(n-r);
    z=fact(r);
    comb=(x)/(y*z);
    printf("Total number of combinations are:%d",comb);
    return 0;
}
int fact(int x){
    int fact=1;
    for (int  i = 1; i <=x; i++)
    {
       fact=i*fact;
    }
    return fact; 
}