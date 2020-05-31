/*Write a program to enter two angles of a triangle and find the third angle.*/
#include<stdio.h>
#include<math.h>
int main(){
float a,x,y,z;
printf("Enter the angles x and y =\n");
scanf("%f%f",&x,&y);
a=x+y;
z=180-a;
printf("Third angle of the triangle is =%f\n",z);
return 0;
}
