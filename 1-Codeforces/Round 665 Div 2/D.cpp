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
#define deball(x) for(auto iit:x) cerr<<iit<<" ";cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

//Code begins from here!!
ll i, j, n, m, k, z;
vector< vector<int> > adj;
vector<ll> vis, val, edge;

void dfs(int node) {
  vis[node] = 1;
  ll sum = 0;
  val[node] = 1;
  for (auto child : adj[node])
    if (!vis[child]) {
      dfs(child);
      sum += val[child];
    }
  val[node] += sum;
  edge.pb(val[node] * (n - val[node]));
}

void solve(void) {
  cin >> n;
  adj.assign(n + 1, vector<int>());
  rep(i, 0, n - 1) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  vis.assign(n + 1, 0);
  val.assign(n + 1, 0);
  edge.clear();

  dfs(1);
  sort(all(edge), big(ll));
  cin >> m;
  vector<ll> p(m);
  for (auto &it : p) cin >> it;

  sort(all(p), big(ll));
  // deball(edge);
  
  ll ans = 0;
  j = 0;
  if (m > (n - 1))
    rep(j, 0, m - n + 1) p[j + 1] = (p[j + 1] * p[j]) % M;

  // deball(p)

  rep(i, 0, edge.size()) {
    if (j < m) ans = (ans + (p[j++] * edge[i]) % M) % M;
    else ans = (ans + edge[i]) % M;
  }

  cout << ans << endl;
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