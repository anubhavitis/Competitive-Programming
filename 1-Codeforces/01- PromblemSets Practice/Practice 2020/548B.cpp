//Mark XIX
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

int t1,t2;

using namespace std;

void solve()
{
  int n,m,q;
  cin>>n>>m>>q;

  int a[n][m];
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      cin>>a[i][j];

  int cnt[n];
  for(int i=0;i<n;++i)
  {
    int x=0,ma=0;
    for(int j=0;j<m;++j)
      if(a[i][j]) x++;
      else
        ma=max(x,ma),x=0;
    cnt[i]=max(x,ma);
  }

  while(q--)
  {
    cin>>t1>>t2;
    a[--t1][--t2]^=1;

    int x=0,ma=0;
    for(int j=0;j<m;++j)
      if(a[t1][j]) x++;
      else
        ma=max(x,ma),x=0;
    cnt[t1]=max(x,ma);

    ma=-1;
    for(auto i:cnt) ma=max(ma,i);
    cout<<ma<<"\n";
  }
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
    cout<<"\n";
    deb('\n')
  }
}