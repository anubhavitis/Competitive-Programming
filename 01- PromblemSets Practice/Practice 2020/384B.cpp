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

// #define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

void solve()
{
  int n,m,k;
  cin>>n>>m>>k;
  int a[n][m];
  rep(i,0,n)
    rep(j,0,m) cin>>a[i][j];

  vector< int > v;
  rep(i,0,m-1)
    rep(j,0,m-i-1)
      if(k)
        v.pb(j+2),v.pb(j+1);
      else
        v.pb(j+1),v.pb(j+2);
  cout<<v.size()/2<<endl;
  rep(i,0,v.size()) cout<<v[i++]<<" "<<v[i]<<endl;
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