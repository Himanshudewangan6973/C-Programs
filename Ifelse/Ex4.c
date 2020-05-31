/*Write a C program to find maximum between two numbers.*/
#include<stdio.h>
int main (){
    int a,b,max;
    printf("Enter the value of a & b=");
    scanf("%d%d",&a,&b);
    if(a>b)
        max=a;
    else
        max=b;
    printf("Maximum of two numbers is %d",max);
    return 0;
    }
