#include<stdio.h>
int main()
{
    int a[5],i,max,min;
    printf("Enter the elements of array : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    max=a[0];min=a[0];
    for(i=0;i<5;i++){
        if(a[i]>a[i+1])
            min=a[i+1];
        else if(a[i]<a[i+1])
            max=a[i];
    }
    printf("Maximum = %d\n\n",max);
    printf("Minimum = %d",min);
    return 0;
}
