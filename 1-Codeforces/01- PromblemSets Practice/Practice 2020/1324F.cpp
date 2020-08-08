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

int i, j, n, m, k;
vector<vector<int> > adj;
vector<int> vis, val, dp;

void dfs(int node) {
  vis[node] = 1;
  int sum = (val[node] == 0) ? -1 : 1;
  for (auto child : adj[node]) if (!vis[child]) {
      dfs(child);
      sum = max(sum, sum + dp[child]);
    }
  dp[node] = sum;
}

void dfs2(int node) {
  vis[node] = 1;
  for (auto child : adj[node]) if (!vis[child]) {
      int marks = dp[node] - max(0, dp[child]);
      dp[child]=max(dp[child],dp[child]+marks);
      dfs2(child);
    }
}
void solve(void) {
  cin >> n;
  val.assign(n + 1, 0);
  rep(i, 0, n) cin >> val[i + 1];
  adj.assign(n + 1, vector<int>());
  dp.assign(n + 1, 0);

  rep(i, 0, n - 1) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }

  vis.assign(n + 1, 0);
  dfs(1);
  vis.assign(n + 1, 0);
  dfs2(1);
  rep(i,1,n+1) cout<<dp[i]<<" ";
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
  // cin >> t;
  while (t--)
    solve();
}