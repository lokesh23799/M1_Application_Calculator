#include<stdio.h>
#include "calculator.h"
int main() 
{ 

 int g,h,options=0; 
 printf("Enter numbers one by one:\n"); 
 scanf("%d %d",&g,&h); 
 printf("\nWelcome! What do you want to perform in your calculator?\n"); 
 printf("\n1.For Addition enter 1\n\n2.For Subtraction enter 2\n"); 
 printf("\n3.For Multiplication enter 3\n\n4.For Division enter 4\n"); 
 printf("\n5.To find Square of the numbers enter 5\n\n6.To find Cube of the numbers enter 6\n"); 
 printf("\n7.For Percentage of both numbers enter 7\n"); 
 printf("\nEnter your choice:"); 
 scanf("%d",&options); 
 switch(options) 
 { 
 case 1: 
 addition(g,h); 
 break; 
 case 2: 
 subtraction(g,h); 
 break; 
 case 3: 
 multiplication(g,h); 
 break; 
 case 4: 
 division(g,h); 
 break; 
 case 5: 
 square(g,h); 
 break; 
 case 6: 
 cube(g,h); 
 break; 
 case 7: 
 percentage(g,h); 
 break; 
 default: 
    printf("\n\nPlease enter number from the given list!\n"); 
    
    
} 

} 