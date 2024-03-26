// 5.	Write a C program – using pointers to swap the values of two variable.

//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
void swap(char *,char*,int );
int main(){
    int i,j,l;
char arr[10],arr2[10];
printf("enter arr : ");
 for (i = 0; i <10; i++)
{
 scanf("%c",&arr[i]);
}
printf("\nenter arr2 : ");
for (i = 0; i <10; i++)
{
 scanf("%c",&arr2[i]);
}
printf("\nafter swap\n\n ");
swap(arr,arr2,10);
 for (i = 0; i <10; i++)
{
 printf("%c",arr[i]);
}
printf("\n\n");
for (i = 0; i <10; i++)
{
 printf("%c",arr2[i]);
}
    return 0;
}
void swap(char *a1,char *a2,int size){
char temp[size];
int i;
for (i = 0; i <size; i++)
{
    temp[i]=*(a1+i);
       *(a1+i)=*(a2+i);
        *(a2+i)=temp[i];
}
}