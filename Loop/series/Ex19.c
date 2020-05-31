
#include<stdio.h>
int main()
{
    int i,j,f=1,n,p;
    float sum=0.0;
    printf("enter the number of terms");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=1; p=1;
        for(j=1;j<=i;j++)
            f=f*j;

        for(j=1;j<=2;j++)
            p=p*i;
        sum=sum+(float)(p)/f;

        i++;

    } printf("sum of series=%f",sum);
    return 0;

}



