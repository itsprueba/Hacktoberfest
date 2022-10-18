#include<stdio.h>
int main()
{
    /* i    j
       1    4
       2    3,4,5
       3    2,3,4,5,6
       4    1,2,3,4,5,6,7 
    */
    
    /*      *
           ***
          *****
    */
    
    int n,i,j,k;
    printf("Enter size : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
    printf("\n");
    }
    
} 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


