#include<stdio.h>
#include<math.h>
void cal(int a,int b,int c,int d,int e,int *sum,double *avg,double *sd)
{
    int temp;
    *sum+=a+b+c+d+e;
    *avg=*sum/5;
    temp=(pow((a-*avg),2)+pow((b-*avg),2)+pow((c-*avg),2)+pow((d-*avg),2)+pow((e-*avg),2));
    temp=temp/5;
    *sd=sqrt(temp);
}
int main()
{
    int a,b,c,d,e,sum=0;
    double avg=0,sd=0;
    printf("Enter the numbers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    cal(a,b,c,d,e,&sum,&avg,&sd);
    printf("\nsum=%d\n",sum);
    printf("average=%lf\n",avg);
    printf("standard deviation=%lf\n",sd);
    return 0;
}
