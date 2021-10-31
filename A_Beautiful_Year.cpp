#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
void solve()
{
    int n;
    cin>>n;
    for(int i=1000;i<=10000;i++)
    {
        if(i>n)
        {
            bool flag=true;
            string s;
            s=to_string(i);
            sort(s.begin(),s.end());
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    flag=false;
                }
            }
            if(flag)
            {
                cout<<i<<endl;
                return;
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    //cin>>tt;
    tt=1;
    while(tt--)
    solve();

    return 0;
}