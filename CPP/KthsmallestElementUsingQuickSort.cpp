#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int h);
int kSmallestElement(int a[],int l,int h,int k)
{
    if(k>0 && k<= h-l+1){
    int pos;
    pos=partition(a,l,h);
    if(pos-l==k-1)
    return a[pos];
    if(pos-l>k-1)
    {
        //call for left subarray
        return kSmallestElement(a,l,pos-1,k);
    }

    //call for right subarray
    return kSmallestElement(a,pos+1,h,k-pos+l-1);
    }
    return INT_MAX;
}
int partition(int a[],int l,int h)
{
    int pivot,i=l,j=h;
    pivot=a[h];
    do{
        do{i++;}while(a[i]<=pivot);
        while(a[j]>pivot){j--;}

        if(i<=j)
        {
            swap(a[i],a[j]);
        }
    }while(i<=h);
    swap(a[j],a[h]);
    return j;
    // int x = a[h], i = l;
    // for (int j = l; j <= h - 1; j++) {
    //     if (a[j] <= x) {
    //         swap(a[i], a[j]);
    //         i++;
    //     }
    // }
    // swap(a[i], a[h]);
    // return i;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=7;
    int A[n],k=4;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int ans;
    ans=kSmallestElement(A,0,n,k);
    cout<<ans<<" ";
    return 0;
}