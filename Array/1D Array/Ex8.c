/*copying elements of one array to another*/
#include<stdio.h>
int main()
{
    int a[5],i,b[5];
    printf("Enter the elements of array : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++){
            b[i]=a[i];
            }
    printf("After copying array elements from a[i] to b[i] =  ");
    for(i=0;i<5;i++)
    printf("%d",b[i]);
    return 0;
}
