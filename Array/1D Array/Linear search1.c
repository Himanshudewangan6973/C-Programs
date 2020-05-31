/*Linear Search ----count for duplicate item in array*/
#include<stdio.h>
int main()
{
    int a[]={2,6,4,1,4,3,2,2},count=0,i,item;
    printf("Enter value of element to search(1 to 10) : ");
    scanf("%d",&item);

    for(i=0;i<8;i++)
    if(a[i]==item){
            count++;
    }
    if(count==0)
        printf("\nItem( %d ) not found : \n\n",item);
    else
        printf("\nItem( %d ) found at %d positions : \n\n",item,count);
    return 0;
}
