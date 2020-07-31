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
  cin>>n;
  vector<int> v(2*n),part;
  rep(i,0,2*n) cin>>v[i];
  int size=1,key=v[0];
  rep(i,1,2*n){
    if(v[i]<key) size++;
    else{
      part.pb(size);
      key=v[i];
      size=1;
    }
  }
  part.pb(size);

  int l=part.size();
  bool dp[n+1][l+1];
  rep(i,0,n+1) dp[i][0]=false;
  rep(i,0,l+1) dp[0][i]=true;

  rep(i,1,n+1)
    rep(j,1,l+1){
      // 2,3
      dp[i][j]=dp[i][j-1];
      if(part[j-1]<=i) dp[i][j]|=dp[(i-part[j-1])][j-1];
    }
  if(dp[n][l]) cout<<"YES\n";
  else cout<<"NO\n";
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