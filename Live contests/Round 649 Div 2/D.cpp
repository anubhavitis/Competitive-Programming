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
vector<int> v[100001];
int fat[100001]={},depth[100001]={};
std::vector<int> vans;
int ans=INT_MAX;
void dfs(int node,int par)
{
  depth[node]=depth[par]+1;
  fat[node]=par;
  deb(node)
  for(auto child:v[node]){
    if(child==par) continue;
    else if(!depth[child] or depth[child]>depth[node]) dfs(child,node);
    else if(ans>(depth[node]-depth[child]+1)){
      ans=depth[node]-depth[child]+1;
      int curr=node;
      while(1){
        vans.pb(curr);
        curr=fat[curr];
        if(child==curr) break;
      }
    }
  }
}

void solve()
{
  int k;
  cin>>n>>m>>k;
  deb(n)
  rep(i,0,m)
  {
    int a,b;
    cin>>a>>b;
    v[a].pb(b);
    v[b].pb(a);
  }
  dfs(1,0);
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