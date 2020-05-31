#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the elements of array : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\nNegative array elements are as follows :  ");
    for(i=0;i<5;i++){
    if(a[i]<0){
        printf("%d\n",a[i]);
        }
        }
    return 0;
}
