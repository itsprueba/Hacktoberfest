#include<iostream>
using namespace std;
int main()
{
    int n,n1,c=0;
    cout<<"ENTER A NUMBER";
    cin>>n;
    n1=n;
    if(n%2==0)
    {
    while(n>0)
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            c++;
        }
        if(c==0){
        cout<<"next prime number after "<<n1<<" is "<<n;
        break;}
        else
        {
            n++;
            c=0;
        }
    }}
    else
    cout<<"Enter a number which is not prime";
    return 0;
}
