#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the number");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
