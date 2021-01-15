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

ll i, j, n, k, z;
vector<vector<int> > adj;
vector<int> vis;
map< pair<int, int>, ll > w, c;
vector< pair<ll, ll> > cnt1, cnt2;
set< pair<ll, ll> > diff1, diff2;
ll tot = 0;

int dfs(int node, int dad) {
  vis[node] = 1;
  int sum = 0, f = 0;

  for (auto child : adj[node]) {
    if (!vis[child]) f = 1, sum += dfs(child, node);
  }

  if (!f) {
    if (c[mp(node, dad)] == 1) cnt1.pb(mp(w[mp(node, dad)], 1));
    else cnt2.pb(mp(w[mp(node, dad)], 1));
    tot += w[mp(node, dad)];
    return 1;
  }
  if (c[mp(node, dad)] == 1) cnt1.pb(mp(w[mp(node, dad)], sum));
  else cnt2.pb(mp(w[mp(node, dad)], sum));

  tot += w[mp(node, dad)] * sum;
  return sum;
}

void solve(void) {

  ll s;
  tot = 0;
  cnt1.clear();
  cnt2.clear();
  w.clear();
  c.clear();
  cin >> n >> s;
  adj.assign(n + 1, vector<int>());
  vis.assign(n + 1, 0);
  rep(i, 0, n - 1) {
    ll u, v, wi, ci;
    cin >> u >> v >> wi >> ci;
    w[mp(u, v)] = w[mp(v, u)] = wi;
    c[mp(u, v)] = c[mp(v, u)] = ci;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  int l = dfs(1, 0);
  // for(auto it: cnt) cerr<<it.first<<" "<<it.second<<endl;

  diff1.clear();
  diff2.clear();

  rep(i, 0, cnt1.size()) {
    ll p = (cnt1[i].first - cnt1[i].first / 2) * cnt1[i].second;
    diff1.insert(mp(p, i));
  }
  rep(i, 0, cnt2.size()) {
    ll p = (cnt2[i].first - cnt2[i].first / 2) * cnt2[i].second;
    diff2.insert(mp(p, i));
  }
  // cerr<<"----\n";
  // for (auto it : cnt1) cerr << it.first << " " << it.second << endl;
  // for (auto it : cnt2) cerr << it.first << " " << it.second << endl;

  ll dup = 0;
  vector<ll > v1, v2;
  v1.pb(0);
  v2.pb(0);
  pair<ll, ll> temp;

  if (diff1.size()) temp = *--diff1.end();
  else temp = mp(0, 0);
  while (temp.first > 0) {
    temp = *--diff1.end();
    diff1.erase(--diff1.end());
    i = temp.second;
    dup += temp.first;
    v1.pb(dup);
    cnt1[i].first = cnt1[i].first / 2;
    ll p = (cnt1[i].first - cnt1[i].first / 2) * cnt1[i].second;
    diff1.insert(mp(p, i));
  }

  if (diff2.size()) temp = *--diff2.end();
  else temp = mp(0, 0);
  dup = 0;
  while (temp.first > 0) {
    temp = *--diff2.end();
    diff2.erase(--diff2.end());
    i = temp.second;
    dup += temp.first;
    v2.pb(dup);
    cnt2[i].first = cnt2[i].first / 2;
    ll p = (cnt2[i].first - cnt2[i].first / 2) * cnt2[i].second;
    diff2.insert(mp(p, i));
  }
  // cerr << tot << " " << s << endl;
  // deball(v1)
  // deball(v2)
  ll ans = LINF;
  for (i = 0; i < v1.size(); ++i) {
    int l = 0, r = v2.size() - 1, mid, pos=-1;
    while (l <= r) {
      mid = (l + r) / 2;
      // cerr<<l<<" "<<r<<" "<<mid<<endl;
      if ((tot - v1[i] - v2[mid]) > s) l = mid + 1;
      else if ((tot - v1[i] - v2[mid]) <= s) pos = mid, r = mid - 1;
    }
    if(pos==-1) continue;
    ans = min(ans, (ll)(i + 2 * pos));
    // deb(ans)
  }
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
  cin >> t;
  while (t--)
    solve();
}