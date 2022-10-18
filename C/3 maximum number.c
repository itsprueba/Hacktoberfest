#include<stdio.h>
int main()
{
	int a, b, c, max;
	printf("Enter three numbers:\n");
	scanf("%d%d%d", &a,&b,&c);
	max = (a>b && a>c)?
	   a: (b>c) ? b:c;
	printf("\n maximum between %d, %d and %d = %d",a,b,c,max);
	return 0;   
}
