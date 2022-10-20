#include<iostream>
using namespace std;
int main()
{
int i=1,n,sum=0,a,b,r;
cout<<"Enter no.: ";
cin>>n;
cout<<"No. of digits: ";
cin>>r;
while(i<=r)   //while(n>0)
{
a=n%10;
n=n/10;
sum+=a;
i++;
}
cout<<"Sum of digits is "<<sum;
return 0;
}
