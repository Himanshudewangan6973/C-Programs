#include<stdio.h>
void perfect_no(int a,int b)
{
    int i,j,sum;
    for(i=a;i<=b;i++){
            sum=0;
        for(j=1;j<i;j++){
                if(i%j==0){
                        sum=sum+j;
                }
        }
        if(sum==i)
            printf("%d is a perfect no.\n",j);
    }
}
int main()
{
    int a,b;
    printf("Enter upper limit a:");
    scanf("%d",&a);
    printf("Enter lower limit b:");
    scanf("%d",&b);
    perfect_no(a,b);
    return 0;
}
