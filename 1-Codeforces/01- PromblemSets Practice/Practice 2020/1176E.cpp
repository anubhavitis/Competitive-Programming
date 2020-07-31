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

int i, j, n, m;
vector<vector<int> > adj;
vector<int> vis, eve, odd;

void dfs(int node, int rank) {
  vis[node] = 1;
  if (rank % 2) odd.pb(node);
  else eve.pb(node);

  for (auto child : adj[node])
    if (!vis[child]) dfs(child, rank + 1);
}

void solve(void) {
  cin >> n >> m;
  adj.assign(n + 1, vector<int>());
  vis.assign(n + 1, 0);
  eve.clear();
  odd.clear();
  rep(i, 0, m) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }

  dfs(1, 0);
  if (eve.size() <= (n / 2)) {
    cout << eve.size() << endl;
    for (auto it : eve) cout << it << " ";
  }
  else {
    cout << odd.size() << endl;
    for (auto it : odd) cout << it << " ";
  }
  cout << endl;
}

int main()
{
  //Skipped in presense of online judge.
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