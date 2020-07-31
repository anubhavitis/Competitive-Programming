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
vector<int> dad,vis;
struct Edge {
  int u, v, w;
};
bool comp(Edge a, Edge b) {
  return a.w < b.w;
}

int find(int node) {
  if (dad[node] == node) return node;
  return dad[node] = find(dad[node]);
}

void dfs(int node){
  vis[node]=1;
  vector<int> childs;
  for(auto child: adj[node]) if(!vis[child]) childs.pb(child);
  sort(all(childs));
  for(auto m: childs){
    cout<<m<<" "<<node<<endl;
    dfs(m);
  }
}
void solve(void) {
  int k, w;
  cin >> n >> m >> k >> w;
  string s[k][n];
  rep(i, 0, k) rep(j, 0, n) cin >> s[i][j];
  vector<Edge> edge;
  rep(i, 0, k) {
    Edge temp;
    temp.u = i + 1;
    temp.v = 0;
    temp.w = n * m;
    edge.pb(temp);

    rep(j, i + 1, k) {
      int u, v, cnt = 0;
      rep(u, 0, n) rep(v, 0, m) if (s[i][u][v] != s[j][u][v]) cnt++;
      cnt *= w;

      Edge t;
      t.u = i + 1;
      t.v = j + 1;
      t.w = cnt;
      edge.pb(t);
    }
  }
  sort(all(edge), comp);
  dad.assign(k + 1, 0);
  iota(all(dad), 0);
  // for (auto it : edge) cerr << it.u << " " << it.v << " " << it.w << endl;
  adj.assign(k+1,vector<int>());
  vis.assign(k+1,0);

  int cnt = 0, sum = 0;
  for (auto it : edge) {
    if (cnt == k) break;
    if (find(it.u) != find(it.v)) {
      cnt++;
      sum += it.w;
      adj[it.u].pb(it.v);
      adj[it.v].pb(it.u);
      dad[find(it.u)] = find(it.v);
    }
  }
  cout << sum << endl;
  dfs(0);
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