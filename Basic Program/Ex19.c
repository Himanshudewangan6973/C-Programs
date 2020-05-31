/*Write a program to enter base and height of a triangle and find its area.*/
#include<stdio.h>
#include<math.h>
int main(){
float a,b,h;
printf("Enter the base b and height h =\n");
scanf("%f%f",&b,&h);
a=(b*h)/2;
printf("Area of the triangle is =%f\n",a);
return 0;
}
