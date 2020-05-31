/*Write a program to enter temperature in Celsius and convert into Fahrenheit.*/
#include<stdio.h>
int main(){
float C,F;
printf("Enter the temperature in Celsius =");
scanf("%f",&C);
F=9/5*C+32;
printf("The temperature in Fahrenheit =%f",F);
return 0;
}
