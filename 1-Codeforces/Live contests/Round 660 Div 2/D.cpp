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
vector<ll> a, b, ans;
vector< vector<int> > adj;
ll fs;
ll dfs(int node) {
  ans.pb(node);
  ll sum=0;
  fs+=a[node-1];
  if (adj[node].size() == 0) {
    cerr << node << " " << max(a[node - 1], sum + a[node - 1]) << endl;
    return max(a[node - 1], sum + a[node - 1]);
  }
  for (auto child : adj[node]) sum += dfs(child);
  fs+=sum;
  cerr << node << " " << sum << " " <<fs << " " << max(a[node - 1], a[node - 1] + sum) << endl;
  return max(a[node - 1], a[node - 1] + sum);
}

void solve(void) {
  cin >> n;
  vector<int> first;
  a.assign(n, 0);
  b.assign(n, 0);
  adj.assign(n + 1, vector<int>());

  rep(i, 0, n) cin >> a[i];
  rep(i, 0, n) {
    cin >> b[i];
    if (b[i] != -1) adj[b[i]].pb(i + 1);
    else first.pb(i + 1);
  }

  ll sum = 0;
  vector<int> sumv;
  for (auto it : first) {
    fs=0;
    ll x= dfs(it);
    sum+=fs;
    reverse(all(ans));
    for (auto jt : ans) sumv.pb(jt);
  }

  cout << sum << endl;
  for (auto it : sumv) cout << it << " ";

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