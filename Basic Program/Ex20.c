/*Write a program to calculate area of an equilateral triangle*/
#include<stdio.h>
#include<math.h>
int main(){
float a,b;
printf("Enter the side of eq. triangle =\n");
scanf("%f",&a);
b=sqrt(3)/2*a*a;
printf("Area of the equilateral triangle is =%f\n",b);
return 0;
}
