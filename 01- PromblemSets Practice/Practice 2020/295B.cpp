//Mark XXVII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define PI 3.14159265
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define deball(x) for(auto iit:x) cerr<<iit<<" ";cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i,j,n,m;

void solve()
{
  cin>>n;
  int gr[n][n],x[n];
  rep(i,0,n) rep(j,0,n) cin>>gr[i][j];
  rep(i,0,n) cin>>x[i];

  ll dp[n][n];
  rep(i,0,n)  rep(j,0,n)
    dp[i][j]=gr[x[n-i-1]-1][x[n-j-1]-1];

  // rep(i,0,n) { rep(j,0,n) cerr<<dp[i][j]<<" "; cerr<<endl; }

  ll ans[n]={};
  int k;
  rep(k,0,n)
  {
    rep(i,0,n)
      rep(j,0,n)
        dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
    rep(i,0,k+1)
      rep(j,0,k+1)
        ans[n-k-1]+=dp[i][j];
  }
  for(ll i:ans) cout<<i<<"   ";
    
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