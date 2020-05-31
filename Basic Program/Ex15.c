/*Write a program to convert days into years, weeks and days(Ignore leap year).*/
#include<stdio.h>
int main(){
int day,year,week,days;
printf("Enter the number of days =");
scanf("%d",&day);
year=day/365;
day=day%365;
week=day/7;
day=day%7;
printf("\nNumber of years = %d\n",year);
printf("Number of weeks = %d\n",week);
printf("Number of days = %d\n",day);
return 0;
}
