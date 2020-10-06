#include<stdio.h>

void bubble(int ar[]);

int main(void)

{
	
int a[10],i;
for(i=0;i<10;i++)

scanf("%d",&a[i]);

bubble(a);
	
for(i=0;i<10;i++)
	
printf("%d\t",a[i]);

}

void bubble(int ar[])

{
	int lol;
int i,j,c;
	
for(i=0;i<9;i++)
	
{
		
for(j=0;j<9-i;j++)

if(ar[j]>ar[j+1])
	
{
			
c=ar[j];

ar[j]=ar[j+1];

ar[j+1]=c;

}
	
}
}
