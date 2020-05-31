/*Linear Search*/
#include<stdio.h>
int main()
{
    int a[]={5,6,7,1,4,3,2,9},flag=0,i,item;
    printf("Enter value of element to search(1 to 10) : ");
    scanf("%d",&item);

    for(i=0;i<8;i++)
    if(a[i]==item){
        flag=1;
        break;
    }
    if(flag==1)
        printf("\nItem( %d ) found at position : %d\n\n",item,i+1);
    else
        printf("\nItem not found\n\n");
    return 0;
}
