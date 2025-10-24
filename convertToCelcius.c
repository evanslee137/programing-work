/*
name:EVANS KOMAREN SEKUT
reg no:CT101/G/22798/24
description:convertToCelcius
*/
#include<stdio.h>

float convertToCelcius(float F);

void main()
{
    float F, C, temperature;
    printf("enter temperature in fahrenheit\n");
    scanf("%f",&F);
    temperature= convertToCelcius(F);
    printf("temperature is:%f\n",temperature);

    
    
}
float convertToCelcius(float F)
{
    float C=(F-32) * 5/9;
    return C;
    
}
