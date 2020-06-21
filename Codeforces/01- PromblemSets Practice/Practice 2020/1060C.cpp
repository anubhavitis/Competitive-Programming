//Mark XXVI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

// #define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

void solve()
{
  int n,m,x;
  cin>>n>>m;

  int a[n+1],b[m+2];
  rep(i,1,n+1) cin>>a[i],a[i]+=a[i-1];
  rep(i,1,m+1) cin>>b[i];
  cin>>x;

  int ans=-1;

  rep(j,1,n+1)
  {
    int s1=INF;
    for(i=0;i+j<=n;++i) s1=min(s1, a[i+j]-a[i]);
    int l=1,r=1,s2=b[1];
    while(r<=m)
    { 
      while((ll)s1*s2>x) s2-=b[l++];
      ans=max(ans,j*(r-l+1));
      s2+=b[++r];
    }
  }
  cout<<ans;
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
  // cin>>t;
  while(t--)
    solve();
}