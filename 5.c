// Calculate a Simple Interest

#include<stdio.h>
int main(){
float Principal , Time , Rate;
printf("enter the principal amoount : ");
scanf("%f", &Principal);

printf("enter the tenure in months : ");
scanf("%f", &Time);

printf("enter the Rate : ");
scanf("%f", &Rate);

printf("The calculated simple interest is : %f", (Principal*Time*Rate)/100);




    return 0;
}

