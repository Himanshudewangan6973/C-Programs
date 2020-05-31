#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter sides of triangle:");
scanf("%d%d%d",&a,&b,&c);
if((a<=(b+c))&&(b<=(a+c))&&(c<=(a+b)))
{
if((a==c)&&(b==a)&&(c==b))
        printf("Triangle is equilateral");
else if((a*a==(c*c+b*b))||(b*b==(a*a+c*c))||(c*c==(b*b+a*a)))
        printf("Triangle is right-angled triangle");
else if((a==c)||(b==a)||(c==b))
        printf("Triangle is isosceles");
else if((a!=c)&&(b!=a)&&(c!=b))
        printf("Triangle is scalene");
}
else
printf("Triangle invalid.");
return 0;
}
