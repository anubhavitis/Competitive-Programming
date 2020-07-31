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

void solve(){
  string s,t="hard";
  cin>>n>>s;
  vector<ll> val(n);
  rep(i,0,n) cin>>val[i];

  ll dp[4][n+1];
  rep(i,0,4)
    rep(j,0,n+1){
      if(j) dp[i][j]=dp[i][j-1];
      else dp[i][j]=0;
      if(s[j]==t[i]) dp[i][j]+=val[j];
      if(i) dp[i][j]=min(dp[i][j],dp[i-1][j]);
    }
  cout<<dp[3][n]<<endl;
  
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