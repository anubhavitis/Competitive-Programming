//Mark XXVI
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
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i,j,n;
stack<int> s;
vector< vector<int> > ans;
vector<int> g[100001],gt[100001],temp;
bool vis[100001]={};


void dfs(int t)
{
  vis[t]=true;

  for(auto it: g[t])
    if(!vis[it]) { dfs(it); s.push(it); }
  s.push(t);
}

void dfs2(int t)
{
  vis[t]=true;
  temp.pb(t);
  for(auto it: gt[t])
    if(!vis[it]) dfs2(it);
}

void solve()
{
  cin>>n;
  int val[n+1];
  rep(i,1,n+1) cin>>val[i];

  int m; cin>>m;
  int x,y;
  rep(i,0,m)
  {
    cin>>x>>y;
    g[x].pb(y);
    gt[y].pb(x);
  }
  rep(i,1,n+1)
    if(!vis[i]) dfs(i);

  rep(i,1,n+1) vis[i]=false;
  while(s.size())
  {
    if(!vis[s.top()]) 
    {
      dfs2(s.top());
      ans.pb(temp);
      temp.clear();
    }
    s.pop();
  }
  ll tot1=0,tot2=1;
  // for(auto it: ans){ for(auto jt:it) cerr<<jt<<" "; cerr<<"\n";}
  for(auto it: ans)
  {
    int mi=INF;
    for(auto jt: it) mi=min(mi,val[jt]);
    tot1+=mi;
    // deb(mi)
    int cnt=0;
    for(auto jt: it) if(val[jt]==mi) cnt++;
    tot2=(tot2*cnt)%M;
  }
  cout<<tot1<<" "<<tot2;

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