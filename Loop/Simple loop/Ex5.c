#include<stdio.h>
int main()
{
    int x,y,z,i=1,n;
    printf("Enter the value of n (works only for three numbers):");
    scanf("%d",&n);
    while(i<=n)
        {
            x=i%10;
            y=i%100;
            y=(y-x)/10;
            z=i/100;
            if((x*x*x+y*y*y+z*z*z)==i)
            printf("Armstrong number between 1 and 500 are %d\n",i);
            i++;
        }
return 0;
}
