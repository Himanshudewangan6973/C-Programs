#include <stdio.h>
int main()
  {
    int a[5],per,i,sum=0;
    printf("enter 5 nos.");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]<33)
    printf("repeat semester");
    else
    sum=sum+a[i];
    }
    per=sum/5;
    if(per<35)
    printf("repeat semester");
    else
    printf("nxt semester");
    return 0;
  }

