// Calculate the Factorial of a Given Number
#include<stdio.h>
int main(){
int n;
printf("enter a no. of which you want factorial :  " );
scanf("%d",&n);

int i = 1;
int fact =1;
while( i <= n){
 fact = fact * i ;
 i = i+1;

}

printf("factorial of the number %d is %d" , n , fact  );




    return 0;
}