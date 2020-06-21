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
  string s;

  int a[n][m]={},b[n][m]={};
  rep(i,0,n)
  {
    cin>>s;
    rep(j,0,m)
      if(s[j]=='1') a[i][j]=1;
  }
  rep(i,0,n)rep(j,0,m) b[i][j]=INF;

  rep(i,0,n)
  {
    int f=INF;
    rep(j,0,m)
    {
      if(a[i][j]==1) f=0;
      else if(f!=INF) f++;
      b[i][j]=f;
    }
    if(b[i][m-1]==INF) { cout<<"-1\n"; return; }
    f=INF;
    rrep(j,m-1,0)
    {
      if(a[i][j]==1) f=0;
      else if(f!=INF) f++;
      b[i][j]=min(f,b[i][j]);
    }
  }
  // rep(i,0,n){ rep(j,0,m) cerr<<b[i][j]<<" "; cerr<<endl; }

  int ans=INF;
  rep(j,0,m)
  {
    int cnt=0;
    rep(i,0,n)
    {
      // if(a[i][j]) continue;
      cnt+=min(b[i][j],m-b[i][j]);
    }
    ans=min(ans,cnt);
    // deb(ans)
    
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