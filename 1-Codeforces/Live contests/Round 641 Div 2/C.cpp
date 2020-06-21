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


void solve()
{
  ll n,k;
  cin>>n;
  ll a[n+5],gc[n+1];
  rep(i,1,n+1) cin>>a[i];
  
  gc[n]=a[n];
  rrep(i,n-1,1) gc[i]=__gcd(a[i],gc[i+1]);

  ll ans=(a[1]*gc[2])/__gcd(a[1],gc[2]);
  rep(i,2,n) ans=__gcd(ans,(a[i]*gc[i+1])/__gcd(a[i],gc[i+1]));
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
  //cin>>t;
  while(t--)
    solve();
}