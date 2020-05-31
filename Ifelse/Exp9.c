#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;

    printf("Enter the coordinates of  first point : ");
    scanf("%d%d",&x1,&y1);
    printf("\nEnter the coordinates of second point : ");
    scanf("%d%d",&x2,&y2);
    printf("\nEnter the coordinates of third point : ");
    scanf("%d%d",&x3,&y3);

    if(((abs(x2-x1)/abs(y2-y1))==(abs(x3-x1)/abs(y3-y1))))
        printf("\nAll the points fall on straight line.\n");
    else
        printf("The points are not on straight line.\n");
        return 0;
}
