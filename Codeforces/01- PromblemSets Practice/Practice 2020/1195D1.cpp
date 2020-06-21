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
int i,j;
using namespace std;

int hcf(ll a,ll b)
{
  a=abs(a);
  b=abs(b);
  return __gcd(a,b);
}
void solve()
{
  int t,n;
  cin>>n;
  string s[n];
  rep(i,0,n) cin>>t,s[i]=to_string(t);
  int l=2*s[0].size();
  ll ans[l]={};
  for(auto it:s)  
    for(i=l-1;i>=0;i-=2)
    {
      ans[i]=(ans[i]+(n*(it[i/2]-'0'))%M)%M;
      ans[i-1]=ans[i];
    }
  rrep(i,l-1,1) ans[i-1]+=ans[i]/10,ans[i]%=10;
  ll A=0;
  for(auto it:ans) A= ( A*10 + it)%M;
  cout<<A;
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