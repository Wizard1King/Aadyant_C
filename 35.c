// Write a C Program to Make a Simple Calculator Using Switch Case
#include<stdio.h>
int main(){
int n;
printf("Enter a number 1_addition , 2_subtraction , 3_division , 4_multipiclation , 5_reaminder(mode) :  ");
scanf("%d", &n);

switch(n) 
{
   case 1 : 
   {
     int n1 , n2;
     printf("enter the two numbers you want to add : ");
     scanf("%d%d", &n1 , &n2);
     printf("Sum of two numbers is : %d", n1 + n2);
     break;
   }
   
   case 2:
   {
     int n1 , n2;
     printf("enter the two numbers you want to subtract : ");
     scanf("%d%d", &n1 , &n2);
     if(n1>n2)
     {
        printf("subtraction of two numbers is : %d", n1 - n2);
     }
     if(n2>n1)
     {
        printf("subtraction of two numbers is : %d", n2 - n1);
     }
    break;
   }

   case 3:
   {
     int n1 , n2;
     printf("enter the two numbers between which  you want division : ");
     scanf("%d%d", &n1 , &n2);
     if(n1>n2)
     {
        printf("division  of two numbers is : %d", n1/n2);
     }
     if(n2>n1)
     {
        printf("division  of two numbers is : %d", n2/n1);
     }

      break;

   }

   case 4:
   {
   int n1 , n2;
     printf("enter the two numbers between which  you want division : ");
     scanf("%d%d", &n1 , &n2);
     printf("Multipiclation of two numbers is : %d", n1*n2);
     break;

   }

   case 5:
   {
    int n1 , n2;
     printf("enter the two numbers between which  you want mode : ");
     scanf("%d%d", &n1 , &n2);
      if(n1>n2)
     {
        printf("remainder is  : %d", n1%n2);
     }
     if(n2>n1)
     {
        printf(" remainder is  : %d", n2/n1);
     }
     break;
   }
   

   default:
   printf("error!!!! wrong command ");
}










return 0;

}