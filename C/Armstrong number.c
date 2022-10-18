#include <stdio.h>

int main()
{
    int sum=0,n,r,re,a;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum += (re*re*re);
        n=n/10;
    }
        if(sum == n)
        {
        printf("armstrong number");
        }
        else
        {
        printf("not an armstrong number");
        }
    return 0;
}
