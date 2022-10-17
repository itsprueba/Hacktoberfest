// LECTURE - 31
// RECURSION

// 1 - FACTORIAL USING RECURSION

#include<iostream>
using namespace std;
int factorial(int n)
{
    // base case
    if(n==0)
    return 1;

    int smallerProblem = factorial(n-1);
    int biggerProblem =n * smallerProblem;

    return biggerProblem;  // in one line --> return n* factorial(n-1)
}
int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<"Factorial is --> "<<ans<<endl;
    return 0;
}