/*Linear nested Search ---  frequency of each element in the array.*/
#include<stdio.h>
int main()
{
    int a[10],i,j,k,n,cnt;
    printf("Enter no. elements in the array(1 to 10) : ");
    scanf("%d",&n);
    printf("Enter elements of the array : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
            cnt=0;
        for(j=i+1;j<n;j++)
            if(a[j]==a[i]){
                for(k=j;k<n;k++){
                    a[k]=a[k+1];
                    cnt++;
                }
                    n--;
                    j--;
            }
            printf("Number %d is repeated by %d in the array\n",i,cnt);
    }
    return 0;
}
