#include<stdio.h>
int main()
{
float m1,m2,m3,m4,m5,per;
printf("\n enter 5 subjects no.");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=(m1+m2+m3+m4+m5)/5;
if (per>90)
printf("\n GradeA");
else
{
if (per>=60)
printf("\n grade B");
else
printf("fail");
}
return 0;
}
