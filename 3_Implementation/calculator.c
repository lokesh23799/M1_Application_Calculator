#include"calculator.h" 
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
 