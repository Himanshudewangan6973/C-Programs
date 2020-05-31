#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define MAX 25
int n;
void create(int*,int);
void traverse(int*,int);
int main()
{
    int a[MAX],i,choice;
    printf("Enter the limit for array : ");
    scanf("%d",&n);
    create(a,n);


    while(1)
    {
        printf("\t\tMENU\n");
        printf("\n\t1.Traverse");
        printf("\n\t2.Insert");
        printf("\n\t3.Delete");
        printf("\n\t4.Exit\n");
        printf("\nEnter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            traverse(a,n);
            break;
        case 2:
            printf("\nInsert\n\n");
            break;
        case 3:
            printf("\nDelete\n\n");
            break;
        case 4:
            printf("\n");
            exit(0);
            break;
        default:
            printf("\nEnter right choice : ");
        }
    }
}
void create(int a[],int n)
{
    printf("\nArray Elements : \n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\n\n");
}
void traverse(int a[],int n)
{
    printf("\nArray Elements : ");
    for(int i=0; i<n; i++)
        printf("%d",a[i]);
    printf("\n");
}
