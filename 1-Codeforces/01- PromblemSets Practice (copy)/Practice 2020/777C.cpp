//Mark XXIII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)

using namespace std;

void solve()
{
  int i,j,n,m;
  cin>>n>>m;
  int a[n][m];
  rep(i,0,n) { rep(j,0,m) cin>>a[i][j]; }
  map< pair<int,int>, int> up;

  for(j=m-1;j>=0;--j) up[mp(n-1,j)]=1;

  for(i=n-2;i>=0;--i)
    for(j=m-1;j>=0;--j)
    {
      if(a[i][j]<=a[i+1][j]) up[mp(i,j)]=up[mp(i+1,j)]+1;
      else up[mp(i,j)]=1;
    }

  map<int,int> lmax;
  rep(i,0,n)
  {
    int mi=0;
    rep(j,0,m) mi=max(mi,up[mp(i,j)]);
    lmax[i+1]=i+mi;
  }  

  int q;
  cin>>q;
  rep(i,0,q)
  {
    int x,y;
    cin>>x>>y;
    if(lmax[x]>=y) cout<<"Yes\n";
    else cout<<"No\n";
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
    solve();
} 