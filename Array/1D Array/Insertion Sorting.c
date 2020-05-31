/*INSERTION SOTRING*/
#include<stdio.h>
#define MAX 10
int main()
{
    int i,j,a[MAX],n,temp;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Before sorting : ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    for(i=0;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

        printf("\n\nAfter sorting : ");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
            printf("\n\n");
    return 0;
}
