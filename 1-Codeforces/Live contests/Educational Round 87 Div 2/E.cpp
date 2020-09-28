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

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;
int i, j, n, m;
vector< vector<int> > adj;
vector<int> vis, v1, v2;
int cnt1, cnt2;
bool bip;

void dfs(int node, int val) {
  vis[node] = val;
  if (val == 1) v1.pb(node), cnt1++;
  else v2.pb(node), cnt2++;

  for (auto child : adj[node])
    if (!vis[child]) dfs(child, 3 - val);
    else if (vis[child] == val) bip = false;
}

void solve()
{
  cin >> n >> m;
  adj.assign(n + 1, vector<int>());
  vis.assign(n + 1, 0);
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  vector< vector<int> > cnt;
  vector< pair< vector<int>, vector<int> > > nodes;
  for (int i = 1; i <= n; ++i)
    if ( !vis[i] ) {
      cnt1 = 0;
      cnt2 = 0;
      bip = true;
      v1.clear();
      v2.clear();

      dfs(i, 1);

      if (!bip) { cout << "NO\n"; return; }
      cnt.pb(vector<int> {cnt1, cnt2});
      nodes.pb(mp(v1, v2));
    }

  cout << "YES\n";




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
  // cin>>t;
  while (t--)
    solve();
}