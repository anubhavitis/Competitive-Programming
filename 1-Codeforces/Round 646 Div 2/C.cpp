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

void numberOfNodes(int s, int e, int cnt[], vector<int> adj[]) 
{ 
  vector<int>::iterator u; 
  cnt[s] = 1; 
  for (u = adj[s].begin(); u != adj[s].end(); u++)
  { 
    if (*u == e)  continue;
    numberOfNodes(*u, s,cnt,adj); 
    
    cnt[s] += cnt[*u]; 
  } 
} 

void solve()
{
  ll x;
  cin>>n>>x;
  int cnt[n+1]={};
  int u,v;
  vector<int> adj[n+1];
  rep(i,0,n-1)
  {
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);

  }
  if(n<3) { cout<<"Ayush\n"; return; }
  numberOfNodes(x,0,cnt,adj);
  ll sum=cnt[x]-1;
  if(sum%2 or adj[x].size()==1) cout<<"Ayush\n";
  else cout<<"Ashish\n";

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