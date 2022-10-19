//WAP to print X pattern
#include <stdio.h>  
  
int main()
 {  
  int n,i,j,m;  
  printf("Enter the number");  
  scanf("%d",&n);  
  m=2*n-1;  
  for(i=1;i<=m;i++)  
  {  
    for(j=1;j<=m;j++)  
    {  
       if(i==j || j==(m-i+1))  
       {  
          printf("*");  
        }  
       else  
       {  
         printf(" ");  
         }  
    }  
    printf("\n");  
  }  
  return 0;  
}  
