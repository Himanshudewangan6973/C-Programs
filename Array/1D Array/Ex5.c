/*second largest element in the array.*/
#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5],i,max1,n,max2;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max1=INT_MIN;max2=INT_MIN;
    for(i=0;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if (max2<a[i]&&a[i]<max1)
        max2=a[i];
    }
    printf("\nSecond Largest element = %d\n\n",max2);
    return 0;
}
