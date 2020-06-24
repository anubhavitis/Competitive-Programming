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

int i,j;

void solve()
{
  ll n,h;
  cin>>n>>h;

  vector<ll> node,conn;
  node.pb(0);
  conn.pb(0);
  ll py=-1,x,y;
  rep(i,0,n)
  {
    cin>>x>>y;
    node.pb(y-x);
    if( py!=-1) conn.pb(x-py);
    py=y;
  }
  ll ans=0;
  conn.pb(INF);
  rep(i,2,n+1)
  {
    node[i]+=node[i-1];
    if(conn[i]!=INF)  conn[i]+=conn[i-1];
  }
  // deball(node)deball(conn)
  j=0;i=1;
  while(j<n)
  {
    while((conn[i]-conn[j])<h) i++;
    ans=max(ans,h+node[i]-node[j]);
    j++;
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
  // cin>>t;
  while(t--)
    solve();
} 