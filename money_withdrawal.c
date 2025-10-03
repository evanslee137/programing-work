/*
name:EVANS KOMAREN SEKUT
reg no:CT101/G/22798/24
description:money withdrawal
*/
#include<stdio.h>
int main() {
    int balance=1000;
    int amount;
    while (balance>0) {
        printf("enter amount to withdraw\n");
    scanf("%d", &amount);
        balance-=amount;
    
    }
if(balance<0) {
  printf("insufficient funds\n"); 

}else{
printf("remaining balance: %d\n",balance);        
}
return 0;

}
