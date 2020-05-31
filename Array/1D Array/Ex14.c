/*Linear Search ---  delete all duplicate items*/
#include<stdio.h>
int main()
{
    int a[10],i,j,k,n,cnt=0;
    printf("Enter no. elements in the array(1 to 10) : ");
    scanf("%d",&n);
    printf("Enter elements of the array : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
            if(a[j]==a[i]){
                for(k=j;k<n;k++)
                    a[k]=a[k+1];
                    n--;
                    j--;
            }
    }
    printf("After deletion of the duplicate elements of the array : ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
