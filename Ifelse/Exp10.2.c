#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5,per;
printf("Enter five subject marks out of 100:\n");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=(m1+m2+m3+m4+m5)/5;
if(per>=60)
    printf("First division\n");
if (per>=50&&per<=59)
        printf("Second Division\n");
if(per>=40&&per<=49)
        printf("Third Division\n");
if(per<40)
        printf("Fail");
    printf("Percentage of student is %d\n",per);
    return 0;
    }
