#include<stdio.h>
int main()
{
    int n,n1,c=0;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    n1=n;
    if(n%2==0)
    {
    while(n>0)
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            c++;
        }
        if(c==0){
        printf("next prime number of %d is %d",n1,n);
        break;}
        else
        {
            n++;
            c=0;
        }
    }}
    else
    printf("Enter a number which is not prime");
    return 0;
}
