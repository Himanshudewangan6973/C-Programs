#include<stdio.h>
int main()
{
    int a[5],i,negative=0;
    printf("Enter the elements of array : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++){
            if(a[i]<0){
                negative++;
            }
    }
        printf("Negative value= %d",negative);
    return 0;
}
