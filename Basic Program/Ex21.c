/*Write a program to enter marks of five subjects and calculate total,average and percentage.*/
#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,d,e,g,f,total,percent,avg;
printf("Enter the marks of five subjects =\n");
printf("a=");
scanf("%f",&a);
printf("b=");
scanf("%f",&b);
printf("c=");
scanf("%f",&c);
printf("d=");
scanf("%f",&d);
printf("e=");
scanf("%f",&e);
printf("enter the total marks of one subject=");
scanf("%f",&f);
total=a+b+c+d+e;
g=5*f;
percent=total*100/g;//*100/500
avg=total/5;
printf("Total = %f\n",total);
printf("Percentage = %f%%\n",percent);
printf("Average =%f\n",avg);
return 0;
}
