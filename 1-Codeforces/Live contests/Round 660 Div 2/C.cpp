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

int i, j, n, k, m;
vector<ll> p, h, vis;
vector<vector<int> > adj, arr;
bool f;

void dfs(int node) {
  vis[node] = 1;
  int ng = 0, nb = 0;

  for (auto child : adj[node])
    if (!vis[child]) {
      dfs(child);
      ng += arr[child][0];
      nb += arr[child][1];
    }

  int tot = nb + p[node];
  arr[node][0] = ng;
  if (arr[node][0] < h[node]) {
    ll dif = h[node] - arr[node][0];
    if (dif <= tot) {
      arr[node][0] += dif;
      tot -= dif;
    }
    else f = 1;
  }
  else {
    ll dif = arr[node][0] - h[node];
    if (dif <= tot) {
      tot -= dif;
      arr[node][1] += dif;
    }
    else f = 1;
  }

  if (tot % 2) f = 1;
  arr[node][0] += tot / 2;
  arr[node][1] += tot / 2;

  if (arr[node][0]<0 or arr[node][1]<0) f=1;
  // cerr << node << " ng=" << arr[node][0] << " nb=" << arr[node][1] << endl;
}

void solve(void) {
  cin >> n >> m;
  p.assign(n + 1, 0);
  h.assign(n + 1, 0);
  adj.assign(n + 1, vector<int>());

  rep(i, 1, n + 1) cin >> p[i];
  rep(i, 1, n + 1) cin >> h[i];
  rep(i, 0, n - 1) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  arr.assign(n + 1, vector<int>(2, 0));
  vis.assign(n + 1, 0);
  f = 0;
  dfs(1);

  if (f == 1) cout << "NO\n";
  else cout << "YES\n";
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