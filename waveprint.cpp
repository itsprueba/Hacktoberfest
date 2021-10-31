#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
void solve()
{
  int arr[100][100];
  int m,n;
  m=4;
  n=4;

  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin>>arr[i][j];
      }
  }

  vector<int> res;
    
    int startRow=0;
    int endRow=m-1;
    int startCol=0;
    int endCol=n-1;
    while(endCol>=0)
    {
        for(int i=startRow;i<=endRow;i++)
        {
            
            res.push_back(arr[i][endCol]);
        }
       endCol=endCol-1;
        for(int j=endRow;j>=startRow;j--)
        {
            
            res.push_back(arr[j][endCol]);
        }
        endCol=endCol-1;
    }
   
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }

//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tt;
    // cin>>tt;
    // while(tt--)
    solve();

    return 0;
}