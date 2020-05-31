/*Delete an element in the array.*/
#include<stdio.h>
int main()
{
    int a[5],i,n,p;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element position to delete : ");
    scanf("%d",&p);

    for(i=p;i<n;i++)
        a[i-1]=a[i];
    printf("Array elements are as follows:\n");
    for(i=0;i<n-1;i++)
        printf("%d\n",a[i]);
    return 0;
}
