#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5,per;
printf("Enter five subject marks out of 100:\n");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=(m1+m2+m3+m4+m5)/5;
if(per>=60)
    printf("First division\n");
else if (per>=50)
        printf("Second Division\n");
else if(per>=40)
        printf("Third Division\n");
else
        printf("Fail");
    printf("Percentage of student is %d\n",per);
    return 0;
    }
