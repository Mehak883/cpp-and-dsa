//Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main(){
    float cost_price,selling_price,Profit,Loss;
    printf("Enter the Cost Price of a product");
    scanf("%f",&cost_price);
    printf("Enter the Selling Price of a product");
    scanf("%f",&selling_price);
    if(selling_price>cost_price){
    Profit=selling_price-cost_price;
    printf("Profit Percentage=%f\n",((Profit)/cost_price)*100);
    }
    else{
    Loss=cost_price-selling_price;
    printf("Loss Percentage=%f",((Loss)/cost_price)*100);
    }
    return 0 ;
    
}