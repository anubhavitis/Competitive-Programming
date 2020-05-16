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
  ll n,k,o=0;
  cin>>n>>k;
  string s;
  cin>>s;
  s="*"+s;

  ll dp[n+1][2];
  ll pref[n+1]={0};
  memset(dp,0,sizeof(dp));

  for(int i=1;i<=n;i++) pref[i]+=pref[i-1]+(s[i]=='1');
  for(int i=1;i<=n;i++)
  {
      if(i<=k)
      {
          dp[i][1]=(s[i]=='0')+pref[i-1];
          dp[i][0]=(s[i]=='1')+min(dp[i-1][0],dp[i-1][1]);
          continue;
      }
      dp[i][1]=(s[i]=='0')+min(dp[i-k][1]+pref[i-1]-pref[i-k],pref[i-1]);
      dp[i][0]=(s[i]=='1')+min(dp[i-1][0],dp[i-1][1]);
  }
  rep(i,0,13) cerr<<dp[i][0]<<" "; cerr<<"\n";
  rep(i,0,13 ) cerr<<dp[i][1]<<" "; cerr<<"\n";
  cout<<min(dp[n][0],dp[n][1])<<"\n";

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