#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,temp,min,pos;
printf("Enter 10 numbers\n");
for(i=0;i<10;i++)
    scanf("%d",&a[i]);
printf("You have entered\n");
for(i=0;i<10;i++)
    printf("%d ",a[i]);
for(i=0;i<9;i++)
{
    min=a[i];
    pos=i;
    for(j=i+1;j<10;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                pos=j;
            }
        }
if (pos!=i)
    {
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
}
printf("\nThe sorted array is\n");
for(i=0;i<10;i++)
    printf("%d ",a[i]);
getch();
}
