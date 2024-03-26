/*2. Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate
 the data values. Now take the input from the user and display the average of data values.*/
 #include<stdio.h>
 #include<stdlib.h>
int main(){
int *a,i,n;
float sum=0,avg;
printf("enter a number : ");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
scanf("%d",(a+i));
}
for(i=0;i<n;i++){
printf("%d ",*(a+i));
}
for(i=0;i<n;i++){
    sum=sum + *(a+i);
}
avg=sum/n;
printf("\n%.2f",avg);
    return 0;
}