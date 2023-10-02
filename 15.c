//Find the Greatest Among Three Numbers
#include<stdio.h>
int main(){
float n1, n2 , n3;
printf("enter three no. you want to compare with each other : ");
scanf("%f %f %f", &n1 , &n2 , &n3);

if (n1 > n2 && n1 > n3)
printf("%f is greater", n1);

else if (n2 > n1 && n2 > n3)
printf("%f is greater than among three numbers ", n2);

else 
printf("%f is greater among three " , n3);




    return 0;
}