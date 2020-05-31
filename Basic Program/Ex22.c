/*Write a program to enter P,T,I calculate simple interest.*/
#include<stdio.h>
#include<math.h>
int main(){
float P,T,R,SI;
printf("Enter the values:\n");
printf("P=");
scanf("%f",&P);
printf("T=");
scanf("%f",&T);
printf("R=");
scanf("%f",&R);
SI=P*R*T/100;
printf("Simple Interest = %f\n",SI);
return 0;
}
