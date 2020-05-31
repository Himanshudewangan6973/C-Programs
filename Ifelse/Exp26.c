#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter angles of triangle:");
scanf("%d%d%d",&a,&b,&c);
if(((b+c)>a)&&((a+c)>b)&&((a+b)>c))
    printf("Triangle is valid.");
else
    printf("Triangle is not valid.");
return 0;
}
