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

ll i,j,n,m,ma=0;
vector<int> adj[100001],vis(100001,0),depth(100001,0);
set<int> nodal;

void dfs(int node, int d)
{
  depth[node]=d;
  vis[node]=1;
  for(auto child:adj[node]) if(!vis[child]) dfs(child,d+1);
}
void dfsnodal(int node){
  vis[node]=1;
  for(auto child: adj[node])
    if(!vis[child]){
      if(adj[child].size()==1) nodal.insert(node);
      else dfsnodal(child);
    }
}
void solve()
{
  cin>>n;
  rep(i,0,n-1){
    int a,b;
    cin>>a>>b;
    adj[a].pb(b);
    adj[b].pb(a);
  }

  std::vector<int> leaf;
  int root;
  rep(i,1,n+1)
   if(adj[i].size()==1) leaf.pb(i);
   else root=i;
  dfs(leaf[0],0);
  rep(i,1,n+1) vis[i]=0;
  dfsnodal(root);

  bool even=true;
  for(auto item:leaf) if(depth[item]%2) even=false;

  if(even)  cout<<"1 "<<n-leaf.size()+nodal.size()-1<<endl;
  else cout<<"3 "<<n-leaf.size()+nodal.size()-1<<endl;

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