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

ll i,j,n,m;
vector<int> adj[200001];
ll a[200001],b[200001],c[200001];
pair<int,int> bad[200001];
ll ans=0;

void dfs(int node,int pt)
{
  int b1=0,b2=0;
  a[node]=min(a[node],a[pt]);
  if(b[node]==0 and c[node]==1) b1++;
  else if(b[node]==1 and c[node]==0) b2++;
  for(auto it: adj[node])
  {
    if(it!=pt)
    {
      dfs(it,node);
      int c1=bad[it].first,c2=bad[it].second;
      ans+=a[it]*2*min(c1,c2);
      b1+=c1-min(c1,c2);
      b2+=c2-min(c1,c2);
    }
  }
  bad[node]=mp(b1,b2);
}

void solve()
{
  cin>>n;
  a[0]=LINF;
  rep(i,0,n) cin>>a[i+1]>>b[i+1]>>c[i+1];
  int u,v;
  rep(i,0,n-1)
  {
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  dfs(1,0);
  ans+=a[1]*2*bad[1].first;
  if(bad[1].first!=bad[1].second) cout<<"-1\n";
  else cout<<ans<<endl;
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