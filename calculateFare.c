/*
name:EVANS KOMAREN SEKUT
reg no:CT101/G/22798/24
description:calculateFare
*/
#include <stdio.h>

int calculateFare(int rate, int distance);

void main()
{
    int rate = 50,distance,Fare;

    printf("Enter distance travelled(in kilometers): ");
    scanf("%d", &distance);

    Fare = calculateFare(rate, distance);  // 
    printf("Total fare is: %d\n", Fare);


}

int calculateFare(int rate, int distance)
{
    int Fare=rate*distance;
    return Fare;
    

}


