#include<stdio.h>
float power(int x,int y)
{
    int i,p=1;
    for(i=0;i<y;i++)
        p=p*x;
    return p;
}
float fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int i,n;
    float sum=0.0f;
    printf("Enter no. of terms :");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+(power(i,i)/fact(i));
        i++;
    }
    printf("Sum of series = %f\n",sum);
    return 0;
}
