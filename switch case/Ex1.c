/*Example of Switch Case with integer data-type.*/
#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    printf("\n");
    switch( i )
    {
        case 1:
                printf("One \n");
                break;
        case 2:
                printf("Two \n");
                break;
        case 3:
                printf("Three \n");
                break;
        default:
                printf("no switch \n");
    }

    return 0;

}
