/*Write a program to enter any number and calculate its square root.*/
#include <stdio.h>
#include <math.h>
int main(){
float x,squrt;
printf("Enter the number x =");
scanf("%f",&x);
squrt=sqrt(x);//double sqrt(double)
printf("Square root of '%f' = %f\n",x,squrt);
return 0;
}
