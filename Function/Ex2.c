/*Write a program to find diameter, area, circumference of a circle using functions.*/
#include<stdio.h>
#define pie 3.14
double area(double r)
{
    return pie*r*r;
}
double circ(double r)
{
    return 2*pie*r;
}
double diameter(double r)
{
    return 2*r;
}
int main()
{
    int r;
    printf("Enter the radius of circle(in cm):");
    scanf("%d",&r);
    printf("Area of circle = %.2lf cm\n",area(r));
    printf("Circumference of circle = %.2lf cm\n",circ(r));
    printf("Diameter of circle = %.2lf cm\n",diameter(r));
    return 0;
}
