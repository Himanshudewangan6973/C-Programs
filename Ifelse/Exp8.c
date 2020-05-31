#include<stdio.h>
int main()
{
    int l,b,area,peri;

    printf("Enter the length and breadth of rectangle:\n");
    scanf("%d%d",&l,&b);

    area=l*b;
    peri=2*(l+b);

    if(area>peri)
        printf("\n\nAREA of rectangle is greater than its perimeter.\n");
    else
        printf("PERIMETER of rectangle is greater than its area.\n");
    return 0;
}
