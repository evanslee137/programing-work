/*
name:EVANS KOMAREN SEKUT
reg no:CT101/G/22798/24
description:water billing
*/
#include<stdio.h>
int main() {
int units;
float Bill;
printf("enter number of water units consumed: \n");
scanf("%d", &units);
if(units<=30) {
 Bill= units * 20;
}else if(units<=60) {
Bill= units * 25;
}else{
 Bill= units * 30;
}
printf("water units consemed: %d\n",units);
printf("Total water Bill: %.2f\n",Bill);
return 0;
}
