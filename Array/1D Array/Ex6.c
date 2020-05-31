#include<stdio.h>
int main()
{
    int a[5],i,even=0,odd=0;
    printf("Enter the elements of array : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++){
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even numbers = %d\n\n",even);
    printf("Odd numbers = %d",odd);
    return 0;
}
