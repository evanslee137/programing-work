// name:EVANS KOMAREN SEKUT
//regno:CT101/G/22798/24
//description:LOAN APPLICATION
#include<stdio.h>
int main() {
    int age, income;
    printf("enter users age: \n");
    scanf("%d", &age);
    printf("enter users annual income: \n");
    scanf("%d", &income);
    if(age>=21 && income>=21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately,we are unable to offer you a loan at this time.\n");
    }
    return 0;
}
