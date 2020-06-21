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

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
ll i,j;
using namespace std;

void solve()
{
  ll n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  s='-'+s;
  int pre[n+1]={};
  rep(i,1,n+1) pre[i]=pre[i-1]+(s[i]=='1');

  int dp[n+1]={};

  rep(i,1,n+1)
  {
    if(i<=k) dp[i]= min((s[i]=='0') + pre[i-1],pre[i]);
    else dp[i]= min((s[i]=='0') + pre[i-1]-pre[i-k] + dp[i-k],pre[i]);
  }
  int m=pre[n],ans=INF;
  rep(i,1,n+1)
  {
    if(s[i]=='1') m--;
    dp[i]+=m;
    ans=min(ans,dp[i]);
  }
  cout<<ans<<endl;

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
  cin>>t;
  while(t--)
    solve();
}