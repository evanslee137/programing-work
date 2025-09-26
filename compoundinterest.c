/*
name:EVANS KOMAREN SEKUT
reg no:CT101/G/22798/24
description:COMPOUND INTEREST AND AMOUNT
*/
#include<stdio.h>
#include<math.h>
int main() {
    double principle, rate, time, amount, CI;
    int n;
    printf("enter principle: \n");
scanf("%lf", &principle);
printf("enter rate: \n");
scanf("%lf", &rate);;
printf("enter time: \n");
scanf("%lf", &time);
printf("enter n: \n");
scanf("%d", &n);
rate = rate/100;
amount = principle * pow((1+ rate/n) , n * time);
CI= amount - principle;
printf("amount is: %.2lf\n",amount);
printf("CI is: %lf\n",CI);
return 0;
}