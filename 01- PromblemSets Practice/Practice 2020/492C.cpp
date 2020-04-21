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
  ll n,r,avg;
  cin>>n>>r>>avg;
  ll sum=0;
  pair<ll,ll> p[n];
  rep(i,0,n)
  {
    int x,y;
    cin>>x>>y;
    sum+=x;
    p[i]=mp(y,x);
  }
  sum=n*avg-sum;
  ll ans=0;
  sort(p,p+n);
  rep(i,0,n)
  {
    if(sum<=0) break;
    if(p[i].second<r)
    { 
      ans+=min(sum,r-p[i].second)*p[i].first;
      sum-=min(sum,r-p[i].second);
    }
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
  //cin>>t;
  while(t--)
    solve();
} 