#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,n1,n2,m,sum=0,j,cnt=0,p,i;
    printf("enter the number");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
sum=0;
cnt=0;
    n=i;
    n1=n;
        n2=n1;
    while(n>0)
    {
        cnt++;
        n=n/10;
    }

    while(n1>0)
    { p=1;

      a=n1%10;
   for(j=1;j<=cnt;j++)
   {
       p=p*a;
   }
   sum=sum+p;
   n1=n1/10;
    } if(sum==n2)
    {
        printf("%d is a armstrong number\n",i);

    }
    }
    return 0;
}
