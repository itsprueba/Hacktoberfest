#include<stdio.h>
int main()
{
    int i,n,p;
    scanf("%d",&n);
    for(i=2;i<n;i++)
   { if(n%i==0)
     p=1;
     break;
   }
   if(p==1)
   printf("Number is not prime");
   else
    printf("Number is prime");
   
    return 0;
}
