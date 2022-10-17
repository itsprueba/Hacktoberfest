#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
 if(b==0)
  return a;
 else
  return gcd(b, a%b);
}


int main()
{
	int n;
	int k;
	cin>>n>>k;
	
	int a[n],d=-1,j,temp;;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<gcd(n,k);i++)
	{
		
		j=i;
		temp=a[i];
		while(1)
		{
			d=(j+k)%n;
			
			if(d==i)
			{
				break;
			}
			else
			{
				a[j]=a[d];
				j=d;
			}

		}

		 a[j]=temp;
	}
 for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
 return 0;
}