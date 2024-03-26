/* Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
 */
#include<stdio.h>
int fact(int);
int main(){
    int x,y,z,r,n,perm;
    printf("Enter items:");
    scanf("%d",&n);
    printf("Enter number of items selected at a time:");
    scanf("%d",&r);
    x=fact(n);
    y=fact(n-r);
    perm=(x)/(y);
    printf("Total number of permutations are:%d",perm);
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