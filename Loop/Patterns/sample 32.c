#include<stdio.h>
int main()
{
    int pos=0,neg=0,zero=0,num;
    char ans='y';
    while(ans=='y' || ans=='Y')
    {
        printf("enter the value of num:");
        scanf("%d",&num);
        if(num>0)
            pos++;
        if(num<0)
            neg++;
        if(num==0)
            zero++;
        printf("do you want to enter more number for yes press y ");
        scanf(" %c",&ans);
    }
    printf("\n no. of zero is %d",zero);
    printf("\n no, of positive is %d",pos);
    printf("\n no. of negetive is %d",neg);
    return 0;
}
