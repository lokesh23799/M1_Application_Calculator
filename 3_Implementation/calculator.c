#include<stdio.h> 
int addition(int g, int h) 
{ 

 int c; 
 c=g+h; 
 printf("\nThe sum is=%d\n\n",c); 

} 
int subtraction(int g, int h) 
{ 

 int f; 
    f=g-h; 
    printf("\nThe subtraction is=%d\n\n",f); 

} 
int multiplication(int g, int h) 
{ 

 int i; 
 i=g*h; 
 printf("\nThe multiplication is=%d\n\n",i); 

} 
double division(double g, double h) 
{ 

    double m; 
    m=g/h; 
    printf("\nDivison is=%.3lf\n\n",m); 

} 
int square(int g, int h) 
{ 

    int sqr1,sqr2; 
    sqr1=g*g; 
    sqr2=h*h; 
    printf("\nSquare of %d is=%d\n",g,sqr1); 
    printf("\nSquare of %d is=%d\n\n",h,sqr2); 

} 
int cube(int g, int h) 
{ 

    int cub1,cub2; 
    cub1=g*g*g; 
    cub2=h*h*h; 
    printf("\nCube of %d is=%d\n",g,cub1); 
    printf("\nCube of %d is=%d\n\n",h,cub2); 

} 
int percentage(int g,int h) 
{ 

    float per1,per2; 
    per1=100*g/h; 
    per2=100*h/g; 
    printf("\n%d is %.3f %c of %d\n",g,per1,37,h);
    printf("\n%d is %.3f %% of %d\n\n",h,per2,g);

} 
 
int main() 
{ 

 int g,h,options=0; 
 printf("Enter numbers one by one:\n"); 
 scanf("%d%d",&g,&h); 
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