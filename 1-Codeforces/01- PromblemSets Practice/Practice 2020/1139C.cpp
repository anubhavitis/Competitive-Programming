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
#define deball(x) for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

const int M=1e9+7;
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i, j, n, k;
vector<int> parent, si;

ll power(int x, int y) {
  ll p;
  if (y == 1) return x;
  if (y == 0) return 1;
  p = power(x, y / 2);
  p = (p * p) % M;
  if (y % 2) p = (x * p) % M;

  return p;
}

int find(int node) {
  if (parent[node] == -1 or parent[node] == node) return parent[node] = node;
  return parent[node] = find(parent[node]);
}

void connect(int u, int v) {
  int x = find(u);
  int y = find(v);
  if (x != y) {
    if (si[x] < si[y]) swap(u, v), swap(x, y);
    si[x] += si[y];
    //u=5 v=7 x=11 y=2
    while (y != x) {
      y = parent[v];
      parent[v] = x;
      v = y;
    }
  }

}

void solve(void) {
  cin >> n >> k;
  parent.assign(n + 1, -1);
  si.assign(n + 1, 1);
  rep(i, 0, n - 1) {
    int u, v, x;
    cin >> u >> v >> x;
    if (!x) connect(u, v);
    else {
      if (parent[u] == -1) parent[u] = u;
      if (parent[v] == -1) parent[v] = v;
    }
  }
  vector<int> v(n + 1, 0);
  rep(i,1,n+1)v[find(i)]++;
  ll ans = power(n, k);
  for (auto it : v) { ans -= power(it, k); ans += M; ans%=M; }
  cout << ans << endl;
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