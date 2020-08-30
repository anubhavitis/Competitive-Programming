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
vector<int> vis, x, dad;

struct Edge {
  int u, v, w;
};

bool comp(Edge u, Edge v) {
  return u.w < v.w;
}

int find(int node) {
  if (dad[node] == node) return node;
  return dad[node] = find(dad[node]);
}
void solve(void) {
  cin >> n >> m >> k;
  x.assign(n + 1, 0);
  rep(i, 0, k) cin >> j, x[j] = 1;
  vector<Edge> edges;

  rep(i, 0, m) {
    Edge temp;
    cin >> temp.u >> temp.v >> temp.w;
    edges.pb(temp);
  }
  sort(all(edges), comp);
  dad.assign(n + 1, 0);
  iota(all(dad), 0);
  adj.assign(n + 1, vector<int>());
  int cnt = 0, i = 0;
  int ans = 0;
  while (cnt < (n - 1)) {
    int d1 = find(edges[i].u), d2 = find(edges[i].v);
    if (d1 != d2) {
      cnt++;
      dad[d1] = d2;
      x[d2]+=x[d1];
      if(x[d2]==k){ ans=edges[i].w; break; }
      adj[edges[i].u].pb(edges[i].v);
      adj[edges[i].v].pb(edges[i].u);
    }
    i++;
  }
  rep(i,0,k) cout<<ans<<" ";

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