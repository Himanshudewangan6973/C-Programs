/*BINARY SEARCH*/
#include<stdio.h>
int main(){
    int low,high,mid,item,size,i;
    printf("Enter the no. of elements : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the sorted elements of the array : ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("Enter the item to be searched : ");
    scanf("%d",&item);
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(item==a[mid]){
            printf("\nItem found at %d position",mid+1);
            break;
        }
        if (item<a[mid])high=mid-1;
        else low=mid+1;
    }
    return 0;
}
