/*
name:EVANS KOMAREN SEKUT
reg no:CT101/G/22798/24
description:password prompt
*/
#include<stdio.h>
#include<string.h>
int main() {
   char password[20];
   char correct[]="1234";
   do {
       printf("enter password:\n");
       scanf("%s", &password);
       if(strcmp(password,correct) !=0) {
       printf("incorrect password\n");
       }
   }while(strcmp(password,correct) !=0);
   printf("access granded\n");
   return 0;

}
