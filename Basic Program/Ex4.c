/*Temperature of a city in Fahrenheit degrees is input through the keyboards.Write a program to convert this temperature into
Centigrade degrees.*/
#include<stdio.h>
int main(){
float c,f;
printf("Enter temperature in Fahrenheit\n");
scanf("%f",&f);
c=5.0/9.0*(f-32);
printf("\nTemperature in Fahrenfeit=%f\n",f);
printf("Temperature in Centigrade=%f\n",c);
return 0;
}
