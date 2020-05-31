/*SELECTION SOTRING*/
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
    printf("Before reversing : ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    for(i=0,j=n-1;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
        printf("\n\nAfter reversing : ");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
            printf("\n\n");
    return 0;
}
