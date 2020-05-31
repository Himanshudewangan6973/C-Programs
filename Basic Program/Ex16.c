/*Write a program to find power of any number x^y.*/
#include<stdio.h>
#include<math.h>
int main(){
int x,y;
float power;
printf("Enter the number x =");
scanf("%d",&x);
printf("Enter the number y =");
scanf("%d",&y);
power=pow(x,y);//double pow(double,double)
printf("Power of %d^%d=%.0f",x,y,power);
return 0;
}
