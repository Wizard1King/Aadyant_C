// C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
int main(){
int n , remainder  , reverse = 0 ;
printf("enter a number : ");
scanf("%d",&n);
int m = n;

for(int i = n ; n != 0 ; n = n/10){
  remainder = n%10;
  reverse = reverse * 10 + remainder;


}
printf("the reverse of %d  is %d", m , reverse);

    return 0;
}