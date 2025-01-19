#include<stdio.h>

int main(){
int a;
int b;
int temp;

//user enter the number
 printf("Enter a digit= ");
 scanf("%d", &a);
 
 printf("Enter a digit= ");
 scanf("%d", &b);
 
 //display the numbers before swap
 printf("Before swap %d %d", a , b);
 
 //swap
 temp = a;
 a = b;
 b = temp;
 
 //display the numbers after swap
 printf("\n After swap %d %d", a, b);
 
 return 0;
}