/*
name:EVANS KOMAREN SEKUT
reg no:CT101/G/22798/24
description:calculateElectricBill
*/
#include<stdio.h>
float calculateElectricBill(int units);

    void main()
{
   float units, Bill;
    printf("enter units consumed\n");
    scanf("%f",&units);
    Bill=calculateElectricBill(units);
    printf("Total Bill is:%f\n",Bill);
    
}

float calculateElectricBill(int units)

{
 float bill =0;
    if(units>=100) {
        bill = units * 10;
    }
    else if(units<=200){
        bill =(100*10) + (units - 100) * 15;
    }
    else{
   bill= (100*10) + (100*15) + (units-200) * 20;
        
    }
    return bill;
}
