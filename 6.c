// C Program to Find Percentage of 5 Subjects
#include<stdio.h>
int main(){
float physics , maths , chemistry , hindi , sanskrit ;
float n;
printf("enter the total marks of a paper : ");
scanf("%f", &n);

printf("enter the marks of physics out of %f : ", n);
scanf("%f", &physics);

printf("enter the marks of maths out of %f : ", n);
scanf("%f", &maths);

printf("enter the marks of chemistry out of %f : ", n);
scanf("%f", &chemistry);

printf("enter the marks of hindi  out of %f : ", n);
scanf("%f", &hindi);

printf("enter the marks of sanskrit out of %f  : ", n);
scanf("%f", &sanskrit);


printf("the percentage of all 5 subjects is : %f percent ",((physics + maths + chemistry + hindi + sanskrit)/(n*5))*100 );







    return 0;
}