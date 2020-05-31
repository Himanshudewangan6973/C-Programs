/*If a four-digit number is input through a keyboard, write a program to obtain the sum of the first and last digit of this number.*/
#include<stdio.h>
int main(){
    int n,a,b,sum;
printf("Enter the four-digit number:");
scanf("%d",&n);
a=n/1000;//n=1
b=n%10;//n=4
sum=a+b;
printf("Sum of first and last digit number in %d is %d",n,sum);
return 0;
}
