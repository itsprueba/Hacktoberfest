#include<stdio.h>
int main()
{
    int a,i=1,table;
    printf("enter any number");
    scanf("%d",&a);
    while(i<=10)
    {
        table=a*i;
        printf("%d x %d= %d\n",a,i,table);
        i++;

    }
    return 0;
}
