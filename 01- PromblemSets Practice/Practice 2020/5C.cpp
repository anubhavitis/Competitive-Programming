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

ll i,j,n,m;

void solve()
{
  string s;
  cin>>s;
  n=s.size();

  int dp[n][2]={};
  dp[0][1]=(s[0]==')')?-1:1;

  rep(i,1,n)
  {
    if(s[i]=='(') 
    {
      dp[i][0]=dp[i-1][0];
      if(dp[i-1][1]<0) dp[i][1]=1;
      else dp[i][1]=dp[i-1][1]+1;
    }
    else 
    {
      dp[i][1]=dp[i-1][1]-1;
      if(dp[i][1]>=0) dp[i][0]=dp[i-1][0]+2;
      else dp[i][0]=0;
    }
  }
  
  rep(i,0,n) cerr<<dp[i][0]<<" "; cerr<<endl;
  int mx=-1;
  rep(i,0,n) mx=max(mx,dp[i][0]);
  cout<<mx<<" ";
  int cnt=(dp[n-1][0]==mx)?1:0;
  rep(i,0,n-1) if(dp[i][0]==mx and dp[i+1][0]!=mx) cnt++;
  cout<<cnt;
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