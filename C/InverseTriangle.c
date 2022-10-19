//WAP t print half triangle pattern
#include<stdio.h>
int main()
{
    int i,j,r;
    printf("Enter no. of rows u want to print: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=(r+1-i);j++)
        
             printf(" * ");       
                                                  
        printf("\n");                                
  

    }
     return 0;
}
