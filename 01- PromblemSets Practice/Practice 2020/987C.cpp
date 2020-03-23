//Mark XXII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

#define deb(x) cerr<<#x<<" "<<x<<"\n";

#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(int i=b; i<c; ++i)
using namespace std;

void solve()
{
  int n;
  cin>>n;
  vector<ll> s(n),c(n);
  vector<ll> mid(n,0);
  rep(i,0,n) cin>>s[i];
  rep(i,0,n) cin>>c[i];

  rep(i,1,n-1)
  {
    ll sum=LONG_MAX;
    rep(j,0,i)
      if(s[j]<s[i]) sum=min(sum,c[i]+c[j]);
    if(sum==LONG_MAX) mid[i]=-1;
    else mid[i]=sum;
  }
  ll ans=LONG_MAX;
  rep(i,1,n-1)
  {
    ll sum=LONG_MAX;
    rep(j,i+1,n)
      if(s[j]>s[i]) sum=min(sum,c[i]+c[j]);
    if(sum==LONG_MAX or mid[i]==-1) mid[i]=-1;
    else mid[i]+=sum-c[i],ans=min(ans,mid[i]);
  }
  if(ans==LONG_MAX) cout<<"-1";
  else cout<<ans;

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