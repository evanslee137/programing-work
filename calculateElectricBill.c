/*
name:EVANS KOMAREN SEKUT
reg no:CT101/G/22798/24
description:calculateElectricBill
*/
#include<stdio.h>
float calculateElectricBill(float units);

void main()
{
 float units, Bill;
 printf("enter units consumed\n");
 scanf("%f",&units);
 Bill = calculateElectricBill(units);
 printf("Total Bill is :%f",Bill);
 
}

float calculateElectricBill(float units)
{
    float Bill=0;
    if(units<=100) {
        Bill=units*10;
        
    }else if(units<=200) {
        Bill=(100*10) + (units-100)*15;
        
    }else{
        Bill=(100*10) + (100*15) + (units-200)*20;
        
    }
   return Bill;
   
}


