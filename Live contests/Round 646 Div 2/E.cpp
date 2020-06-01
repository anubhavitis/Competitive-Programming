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
vector<int> adj[100001];
ll a[100001],b[100001],c[100001];
ll chan[100001]={},cost[100001]={};
bool vis[100001]={};

void calc(int node)
{
  vis[node]=true;
  if(c[node]!=b[node]) chan[node]++;
  ll sum=0,temp=chan[node]*a[node];
  if(node==3) deb(chan[3])
  for(auto it: adj[node])
    if(!vis[it])
    {
      calc(it);
      sum+= cost[it];
      chan[node]+=chan[it];
    }
  if(!sum) sum=chan[node]*a[node];
  else sum=min(sum+temp,chan[node]*a[node]);
  cost[node]=sum;
  cerr<<node<<" "<<cost[node]<<endl;                                                 
}

void solve()
{
  cin>>n;
  rep(i,0,n) cin>>a[i+1]>>b[i+1]>>c[i+1];
  int u,v;
  rep(i,0,n-1)
  {
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  rep(i,1,n+1)
  if(!vis[i]) calc(i);

  cout<<cost[1]<<endl;
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