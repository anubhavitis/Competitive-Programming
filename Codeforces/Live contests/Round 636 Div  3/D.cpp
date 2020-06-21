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
  int n,k;
  cin>>n>>k;
  ll a[n];
  rep(i,0,n) cin>>a[i];
  ll rmi=0,rmx=LINF;
  map<ll,ll> m;
  rep(i,0,n/2)
  {
    rmi=max(rmi,1+min(a[i],a[n-i-1]));
    rmx=min(rmx,k+max(a[i],a[n-i-1]));
    m[a[i]+a[n-i-1]]++;
  }
  ll cm=rmx,cnt=0;
  rrep(i,rmx,rmi) 
    if(cnt<m[i])
    {
      cnt=m[i];
      cm=i;
    }
  ll ans=0;
  rep(i,0,n/2)
    if((a[i]+a[n-i-1])!=cm) ans++;
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