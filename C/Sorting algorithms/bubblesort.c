#include<stdio.h>


void swap(int *a,int *b)//function for swapping two numbers
{
    int t=*a;
    *a=*b;
    *b=t;
}

void bubblesort(int a[],int n)//function for implementing bubblesort
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)//the largest number from the unsorted list is kept at end after every iteration
        {
            if(a[j]>=a[j+1])
            swap(&a[j],&a[j+1]);
        }
    }
}

int main()
{
    int n;
    printf("enter the number of elements that you want to sort: ");
    scanf(" %d",&n);
    int a[n+1],i;
    for(i=1;i<=n;i++)
    {
        printf("enter the number: ");
        scanf(" %d",&a[i]);
    }
    bubblesort(a,n);
    printf("the numbers in sorted order are: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
