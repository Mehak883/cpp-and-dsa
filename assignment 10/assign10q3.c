//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int check_number(int n);
int main(){
int num, m;
printf("enter a no");
scanf("%d",&num);
m= check_number(num);
printf("%d",m);

    return 0;
}
int check_number(int n){
    int c=1;
    if(n%2==0){
        c=1;
   return 1; 
    }    
    if(n%2!=0){
c=0;
return 0;
    }
} 