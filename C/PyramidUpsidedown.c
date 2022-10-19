#include <stdio.h>
int main() {
   int i,j, s, l,r= 0;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   l=r;
   for (i = 1; i <= r; ++i)
    {
      for (s= 1; s<=(r+i); ++s)
       {
         printf(" ");                                          
             for(j=1;j<=(r+l);j++)
           {
             printf("*");                                                   
           }                                          
       }                                                     
      printf("\n"); 
   }
   return 0;
}
