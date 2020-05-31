#include<stdio.h>
int main()
{
    int i,a[5]={2,4,6,8,10};

    for(i=0;i<5;i++)
    {
        printf("\nAddress = %u Address = %u",(a+i),(i+a));
        printf("\nValue = %d Value = %d",*(a+i),*(i+a));
        printf("\nValue = %d Value = %d",a[i],i[a]);
        printf("\n");
    }
    return 0;
}
