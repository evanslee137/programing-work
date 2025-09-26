//simple c program
#include<stdio.h>
int main() {
    //variable declaration
    float height, balance;
    char phone[20];
    printf("enter your height: \n");//user's height
    scanf("%f",&height);//read height
    printf("enter bank balance: \n");//bank balance
    scanf("%f",&balance);
    printf("enter your phone number: \n");//telephone number
    scanf("%s",phone);
    printf("height is: %.2fmeters\n",height);
    printf("bank balance is: %.2fKsh\n",balance);
    printf("phone number is: %s\n",phone);
    return 0;
}