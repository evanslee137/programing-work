#include<stdio.h>
int main() {
int attendance, marks;
printf("enter percentage attendnce: \n");
scanf("%d", &attendance);
printf("enter average marks: \n");
scanf("%d", &marks);
if(attendance>70 && marks>40) {
    printf("elligible");
}else{
    printf("not elligible");
}
return 0;
}