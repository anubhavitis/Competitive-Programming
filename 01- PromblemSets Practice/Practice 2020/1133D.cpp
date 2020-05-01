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
  int n;
  cin>>n;
  int a[n],b[n];
  rep(i,0,n) cin>>a[i];
  rep(i,0,n) cin>>b[i],b[i]*=(-1);
  map< pair<int,int>, int> m;
  int cnt=0;
  rep(i,0,n)
  {
    if(a[i]==0 and b[i]==0) { cnt++; continue; }
    if(a[i]==0) continue;

    int t=hcf(a[i],b[i]);

    a[i]/=t;
    b[i]/=t;
    if((a[i]<0 and b[i]<0) or (a[i]>0 and b[i]>0))  m[mp(abs(b[i]),abs(a[i]))]++;
    else m[mp((-1)*abs(b[i]),abs(a[i]))]++;
  }
  int ans=0;
  for(auto it:m) ans=max(ans,it.second);
  cout<<ans+cnt;
  
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