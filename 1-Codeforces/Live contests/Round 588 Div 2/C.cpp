//Mark XIV
#include<bits/stdc++.h>

#define ll long long int
#define M 1000000007
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
  int n,m;
  cin>>n>>m;
  int a[n][n]={};
  int u,v;
  for(int i=0;i<m;++i)
  {
    cin>>u>>v;
    a[u-1][v-1]=1;
    a[v-1][u-1]=1;
  }
  int t=0;
  for(int i=0;i<n;++i)
  {
    for(int j=0;j<n;++j)
    {
      cerr<<a[i][j]<<" ";
    }
    cerr<<"\n";
  }
  for(int i=0;i<n;++i)
  {
    for(int j=i;j<n;++j)
    {
      if(a[i][j]==1) t++;
    }
  }
  cout<<min(t,16);
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
  ll t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
}