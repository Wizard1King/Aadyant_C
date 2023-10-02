// Program of Armstrong Number in C Using For Loop & While Loop

///////////////////////////////////////////////////////////////////////////////////

/* FROM WHILE LOOP 
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    int m = n;
    int number = 0 , remainder;

    
    while (n != 0){
     remainder = n%10;
     number = number  + (remainder * remainder * remainder);
     n = n/10;
    

    }

if (number == m )
printf("it is a armstrong number ");

else
printf("not a armstrong number "); 
 return 0 ;
} */

///////////////////////////////////////////////////////////////////////////////////////

// FROM FOR LOOP

#include<stdio.h>
int main(){
int n ,  m;
printf("enter a number");
scanf("%d", &n);
m = n;

int number = 0 , remainder ;
 for(int i = n ; n != 0 ; n = n/10)
 {remainder = n%10;
 number = number + (remainder * remainder * remainder);
}
if (number == m)
printf("its is a armstrong number");
else
printf("its not a armstrong number");

return 0;
}