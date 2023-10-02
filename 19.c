// Leap Year Program in C with Logic, Explanation and Output
#include<stdio.h>
int main(){
int year;
printf("enter a year you want to check if it is leap year or not : ");
scanf("%d", &year);

if(  year % 400 == 0 && ( year % 4 == 0 && year % 100 != 0 ))
printf("the entered year is leap year ");

else
printf("the entered year is not a leap year ");



    return 0;
}