//7. Program to take the value from the user as input electricity unit chargesand calculate total electricity bill according to the given condition . Using the switch statement.
/*For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.     */
#include <stdio.h>
int main()
{
    int unit,temp,tmp2;
    float bill,total_bill;
    printf("enter no of units : ");
    scanf("%d", &unit);
    temp=unit;
    if(unit>250){
        temp=251;
       }
    switch (temp)
    {
    case 0 ... 50:
     bill=unit*0.50;
    total_bill=bill+bill*(0.2);
printf("your bill of unit %d is %.2f",unit,total_bill);        
        break;
    
    case 51 ... 150:
    bill=unit*0.75;
    total_bill=bill+bill*(0.2);
printf("your bill of unit %d is %.2f",unit,total_bill);        
        break;
        case 151 ... 250:
         bill=unit*1.20;
    total_bill=bill+bill*(0.2);
        printf("your bill of unit %d is %.2f",unit,total_bill);
        break;
        case 251 :
         bill=unit*1.50;
    total_bill=bill+bill*(0.2);
        printf("your bill of unit %d is %.2f",unit,total_bill);        
        break;
    }
    return 0;
}
