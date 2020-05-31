/*Inset elements in the array*/
#include<stdio.h>
int main()
{
    int a[10],i,n,item,p;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter value to insert & its position : ");
    scanf("%d%d",&item,&p);
    if(p<10)
        for(i=n;i>=p-1;i--)
            a[i]=a[i-1];
    a[p-1]=item;
    printf("Array elements are as follows:\n");
    for(i=0;i<n+1;i++)
        printf("%d\n",a[i]);
    return 0;
}
