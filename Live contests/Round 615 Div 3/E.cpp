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
using namespace std;

void solve()
{
  std::map<int,int>f;
  int i,j,n,m,t,r;
  scanf("%d%d",&n,&m);
  int a[n+n+1][m+1];
  for(i=1;i<=n;++i)
    for(j=1;j<=m;++j)
      scanf("%d",a[i]+j),a[i+n][j]=a[i][j];
  for(j=1;j==1;++j,r+=t)
  {
    f.clear(),t=n;
    for(i=1;i<n+n;++i) { a[i][j]-=(i-1)*m; cout<<a[i][j]<<" "; }
    cout<<"\n";
    for(i=1;i<=n;++i) { ++f[a[i][j]]; cout<<a[i][j]<<" "; }
    cout<<"\n";
    for(i=1;i<=n;++i)
    {
      t=std::min(t,i-1+n-f[j-(i-1)*m]);
      --f[a[i][j]],++f[a[i+n][j]];
    }
  }
  // printf("%d",r);
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