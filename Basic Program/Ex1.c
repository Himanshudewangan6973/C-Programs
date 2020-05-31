/*Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary,
and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>
int main(){
float bs,hra,da,gs;
printf("ENTER THE BASIC SALARY OF RAMESH:");
scanf("%f",&bs);
da=bs*40/100;
hra=bs*20/100;
gs=bs+hra+da;
printf("Basic Salary=%.5f\n",bs);
printf("DA=%.3f\n",da);
printf("HRA=%.4f\n",hra);
printf("Gross Salary=%.2f\n",gs);
return 0;
}
