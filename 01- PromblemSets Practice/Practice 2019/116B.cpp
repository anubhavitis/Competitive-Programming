//Mark XIV
#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve()
{
  int m,n;
  cin>>n>>m;
  char a[n][m];
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      cin>>a[i][j];
  int c=0;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      if(a[i][j]=='W')
      {
        if(a[i-1][j]=='P' and i>0) c++;
        else if(a[i+1][j]=='P' and i<n-1  ) c++;
        else if(a[i][j+1]=='P' and j<m-1) c++;
        else if(a[i][j-1]=='P' and j>0) c++;
      }
    }
  }
  cout<<c;  
}

int main()
{
    //Skipped in presense of online judge.
    #ifndef ONLINE_JUDGE
    freopen("/home/zeddie/Documents/input.txt","r",stdin);
    freopen("/home/zeddie/Documents/output.txt","w",stdout);
    freopen("/home/zeddie/Documents/error.txt","w",stderr);
    #endif

    IOS()
    int t=1;
    //cin>>t;
	while(t--)
	{
		solve();
	}
}