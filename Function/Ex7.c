#include<stdio.h>
int fact(int c)
{
    int i,f=1;
    for(i=1;i<=c;i++)
        f=f*i;
    return f;
}

void strong(int a,int b)
{
    for(int i = a; i <= b; i++) {
            int sum=0;
            int d=i;
            int c;
        while(d>0) {
            c=d%10;
            sum=sum+fact(c);
            d=d/10;
        }
        if(sum==i)
            printf("%d is a strong no.\n",i);
    }
}

int main()
{
    int a,b;
    printf("Enter lower limit a: ");
    scanf("%d",&a);
    printf("Enter upper limit b: ");
    scanf("%d",&b);
    strong(a,b);
    return 0;
}
