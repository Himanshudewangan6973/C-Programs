#include<stdio.h>
int power(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
        p=p*x;
    return p;
}

void armstrong(int a,int b)
{
    for(int i=a;i<=b;i++){
        int count = 0,sum=0;
        for(int k = i; k > 0; k /= 10){
                    count++;
        }
        for(int j = i; j > 0; j /= 10){
                sum=sum+power((j%10),count);
        }
        if(sum==i)
            printf("%d is Armstrong no.\n",i);
    }
}

int main()
{
    int a,b;
    printf("Enter the interval a & b :");
    scanf("%d%d",&a,&b);
    armstrong(a,b);
    return 0;
}
