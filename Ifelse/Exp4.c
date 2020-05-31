#include<stdio.h>
int main()
{
    int p,l,sp,cp;
    printf("Enter the salling price and cost price:\n");
    scanf("%d%d",&sp,&cp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
        printf("Profit=%d",p);
    else if(l>0)
        printf("Loss=%d",l);
        else
            printf("No profit no loss.");
        return 0;
}


//for changing -ve value to positive value
//a=abs(a);       abs=absolute
