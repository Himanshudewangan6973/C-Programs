#include<stdio.h>
int main()
{
int a1,a2,a3;
printf("Enter a angles of triangle:");
scanf("%d%d %d",&a1,&a2,&a3);
if((a1+a2+a3)==180)
    printf("Triangle is valid.");
else
    printf("Triangle is not valid.");
return 0;
}
