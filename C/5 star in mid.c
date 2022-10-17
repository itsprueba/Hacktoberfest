#include<stdio.h>
int main()
{
	int i,j,k,rows;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	for(i=0;i<=rows;i++)
	{
		for(k=rows;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
