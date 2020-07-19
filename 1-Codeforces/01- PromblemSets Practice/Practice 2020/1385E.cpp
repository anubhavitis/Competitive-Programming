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

vector<int> visited;
vector<int> ans;

int dfs(set<int> adj[], int v) {
  visited[v] = 1;
  for (int u : adj[v]) {
    // cerr<<u<<" "<<v<<endl;
    if (!visited[u]) { if(dfs(adj, u)) return 1; }
    else if(visited[u]==1) return 1;
  }
  ans.push_back(v);
  visited[v]=2;
  return 0;
}

void solve(){
  cin>>n>>m;
  set<int> adj[n+1];
  vector<int> adj2[n+1]; 
  visited.assign(n+1,0);
  ans.clear();
  rep(i,0,m){
    int t,u,v;
    cin>>t>>u>>v;
    if(t) adj[u].insert(v);
    if(!t) adj2[u].pb(v),adj2[v].pb(u);
  }

  rep(i,1,n+1)
    if (!visited[i]){
      int x=dfs(adj, i);
      if(x==1) { cout<<"NO\n"; return; }
    }
  reverse(ans.begin(), ans.end());

  map<int,int> mapi;
  rep(i,1,ans.size()+1) mapi[ans[i-1]]=i;
  rep(i,1,n+1){
    for(auto v: adj2[i]){
      if(mapi[v]>mapi[i]) adj[i].insert(v);
      else adj[v].insert(i);
    }
  }
  cout<<"YES\n";
  rep(i,1,n+1){
    for(auto v: adj[i]) cout<<i<<" "<<v<<endl;
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
  cin>>t;
  while(t--)
    solve();
} 