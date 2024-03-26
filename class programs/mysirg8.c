#include<stdio.h>
void add(int ,int);
int main(){
int x,y;
printf("enter x and y");
scanf("%d %d ",&x,&y);
add(x,y);
return 0;
}
void add(int a, int b){
    int c;
    //  printf("enter a and b");
    //  scanf("%d %d",&a,&b);
    c=a+b;
    printf("\n ans is %d",c);
}