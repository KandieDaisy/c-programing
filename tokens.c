/*
author: Daisy 
Registration: BSE-01-0039/2024
Description: Calcualtion of bill to pay in tokens
*/
#include <stdio.h>

int main() {
    int customer_id,unit_consumed;
    float total_pay,charges;
    char customer_name[50];
    //prompt the user to enter data 
    printf("enter customer_name");
    scanf("%d", &customer_id);
    
    printf("enter units_consumed");
    scanf("%d, &units_consumed");

//offers the condition to met
if(unit_consumed<=199){
    charges = 1.20;
}else if(unit_consumed>=200&& unit_consumed<400){
    charges = 1.50;
    }else if(unit_consumed>=400&& unit_consumed< 600){
        charges  = 1.80;
    }else if(unit_consumed>=600){
        charges = 2.00;
    }
    //calculate the payments
    total_pay=unit_consumed*charges;
    if(total_pay>400){
        total_pay=total_pay*(0.15*total_pay);
    }
    //resulting output
    printf("customer_id: %d\n", customer_id);
    printf("customers_name: %s\n", customer_name );
    printf("unit_consumed: %d\n", unit_consumed);
    printf("charges per unit: %2f\n", charges);
    printf("total_pay: %2f\n", total_pay);
    

    return 0;
}