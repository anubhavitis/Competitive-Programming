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

ll i,j,n,m,ma=0,f=1;
vector<int> adj[2001],vis(2001,0),cnt(2001,0);
vector<int> used(2001,0), c(2001), a(2001);

void dfs(int node, int dad){
  int temp=c[node];
  cnt[node]=1;
  int ii;
  rep(ii,1,n+1)
    if(!used[ii] and !temp) { a[node]=ii; used[ii]=1; break; }
    else if(!used[ii]) temp--;
  for(auto child: adj[node]){
    dfs(child,node);
  }
  cnt[dad]+=cnt[node];
  if(cnt[node]-1<c[node]) f=0;
}

void solve()
{
  cin>>n;
  int root;
  rep(i,0,n){
    int u;
    cin>>u>>c[i+1];
    adj[u].pb(i+1);
    if(u==0) root=i+1;
  }

  dfs(root,0);

  if(!f) cout<<"NO\n";
  else{
    cout<<"YES\n";
    rep(i,1,n+1) cout<<a[i]<<" ";
  }
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