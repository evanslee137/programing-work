// name:EVANS KOMAREN SEKUT
//regno:CT101/G/22798/24
//description:VOLUME AND SURFACE AREA
//volume and surface area
#include<stdio.h>
#define PI 3.141592653589793
int main() {
    double radius, height, volume, area;
    printf("enter radius: \n");//input radius
    scanf("%lf",&radius);
    printf("enter height: \n");//input height
    scanf("%lf",&height);
    volume=PI * radius * radius * height;
    printf("volume is: %lf\n",volume);
    area=2*PI*radius*radius + 2*PI*radius*height;
    printf("area is: %.2lf\n",area);
    return 0;
}
