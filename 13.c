// C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main(){
    char a;
printf("enter any character : ");
scanf("%c",&a);

if(a>='A' && a<='Z'){
    printf("entered character is upper case : ");
}
else if(a>= 'a' && a<= 'z'){
    printf("entered character is lower case");
}
else if(a>= '0' && a<= '9'){
    printf("entered character is a digit");
}
else 
printf("it is a special character");
   
   
   
   
   
   
   
   
   
   
   
    return 0;

}