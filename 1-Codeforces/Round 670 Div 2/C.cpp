//Mark XXX
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
#define deball(x) for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

//Code begins from here!!

int n;
vector< vector<int> > adj;
vector<int> vis, cnt, cntmax, dad;

void dfs(int node, int d) {
  dad[node] = d;
  vis[node] = 1;
  int sum = 0;
  for (auto child : adj[node])
    if (!vis[child]) {
      dfs(child, node);
      sum += cnt[child];
      cntmax[node] = max(cntmax[node], cnt[child]);
    }
  cnt[node] = sum + 1;
  cntmax[node]=max(cntmax[node], n-cnt[node]);
}

void solve(void) {
  cin >> n;
  adj.assign(n + 1, vector<int>());

  for (int i = 0; i < n - 1; ++i) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }

  vis.assign(n + 1, 0);
  cnt.assign(n + 1, 0);
  cntmax.assign(n + 1, 0);
  dad.assign(n + 1, 0);
  dfs(1, 0);

  vector<int> cent;
  int temp=INT_MAX;
  for(int i=1; i<=n; ++i) temp=min(temp, cntmax[i]);
  for(int i=1; i<=n; ++i) if(cntmax[i]==temp) cent.pb(i);

  deball(cent)
  if(cent.size()==1){
    cout<<"1 "<<adj[1][0]<<endl;
    cout<<"1 "<<adj[1][0]<<endl;
    return;
  }

  int x=cent[0], y=cent[1];

  for(auto it: adj[x]) if(it!=y){
    cout<<x<<" "<<it<<endl;
    x=it;
    break;
  }
  cout<<x<<" "<<y<<endl;
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
  IOS()
  ll t = 1;
  cin >> t;

  while (t--)
    solve();
}