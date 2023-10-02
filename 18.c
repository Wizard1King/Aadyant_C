#include<stdio.h>
int main(){
int a;
printf("enter a number : ");
scanf("%d", &a);

if ((a+2)%2 == 0)
printf("entered number is even  ");

if((a+2)%2  != 0)
printf("enterd number is odd ");







    return 0;
}