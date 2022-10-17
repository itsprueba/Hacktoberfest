#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;

    if(n==1 || n%4!=0)
    {
        cout<<"NO\n";
    }
    else
    {
        int i,j;
        i=1;
        j=n;
        int cnt=0;
        vector<int> v1;
        while(cnt<n/2)
        {
            v1.push_back(i);
            v1.push_back(j);
            i=i+2;
            j=j-2;
            cnt=cnt+2;
        }

        vector<int> v2;
        i=2;
        j=n-1;
        cnt=0;
        while(cnt<n/2)
        {
            v2.push_back(i);
            v2.push_back(j);
            i=i+2;
            j=j-2;
            cnt=cnt+2;
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        cout<<"YES\n";
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<v2.size();i++)
        {
            cout<<v2[i]<<" ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--)
    solve();

    return 0;
}