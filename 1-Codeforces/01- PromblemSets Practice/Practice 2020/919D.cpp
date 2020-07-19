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

int i,j,n,m;
const int N=300001;
string s;
vector<int> first,vis(N+1,0);
set<int> adj[N];
int dp[N+1][26]={};

void dfs(int node){
  vis[node]=1;
  for(auto child:adj[node]){
    if(!vis[child]) dfs(child);
    else if(vis[child]==1) { cout<<"-1"; exit(0); }
    rep(i,0,26) dp[node][i]=max(dp[node][i],dp[child][i]);
  }
  dp[node][(s[node-1]-'a')]++;
  vis[node]=2;
}

void solve(){
  cin>>n>>m>>s;
  rep(i,0,m){
    int u,v;
    cin>>u>>v;
    if(u==v) { cout<<"-1"; return;}
    adj[u].insert(v);
  }

  int arr[n+1]={};
  for(auto it: adj)
    for(auto jt: it) arr[jt]=1;
  rep(i,1,n+1) if(!arr[i]) first.pb(i);
  int ans=-1;

  for(auto it: first){
    dfs(it);
    rep(i,0,26) ans=max(ans,dp[it][i]);
  }
  cout<<ans;
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