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

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i,j,n,m;
ll a[100001],b[100001];
ll prefa[100001],prefb[100001];

ll f(ll mid)
{
  ll temp=0;
  ll l=lb(a,a+n+1,mid)-a-1;
  temp=(l*mid)-prefa[l];
  l=lb(b,b+m+1,mid)-b-1;
  temp+=(prefb[m]-prefb[l])-(m-l)*mid;  
  return temp;
}
void solve()
{

  cin>>n>>m;
  rep(i,1,n+1) cin>>a[i];
  sort(a,a+n+1);
  rep(i,1,n+1) prefa[i]=prefa[i-1]+a[i];

  rep(i,1,m+1) cin>>b[i];
  sort(b,b+m+1);
  rep(i,1,m+1) prefb[i]=prefb[i-1]+b[i];
  ll ans=LINF;
  // deb(n) deb(m)
  rep(i,1,n+1) ans=min(ans,f(a[i]));
  rep(i,1,m+1) ans=min(ans,f(b[i]));
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
  // cin>>t;
  while(t--)
    solve();
} 