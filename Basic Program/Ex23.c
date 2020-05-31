/*Write a program to enter P,T,I calculate Compound interest.*/
#include<stdio.h>
#include<math.h>
int main(){
float P,T,R,CI;
printf("Enter the values:\n");
printf("P=");
scanf("%f",&P);
printf("T=");
scanf("%f",&T);
printf("R=");
scanf("%f",&R);
CI=P*pow((1+R/100),T);
printf("Simple Interest = %f\n",CI);
return 0;
}
