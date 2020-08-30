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

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i, j, n, k, w, m;

void solve(int t)
{
  cin >> n >> m >> k;
  vector<ll> sat(n);
  rep(i, 0, n) cin >> sat[i];
  map<pair<int, int>, int> rules;
  rep(i, 0, k) {
    int x, y, c;
    cin >> x >> y >> c;
    rules[mp(x, y)] = c;
  }

  ll dp[1 << n][n] = {}, ans = 0;

  rep(i, 0, (1 << n)) rep(j, 0, n)
  if (i & (1 << j)) {
    dp[i][j] = sat[j];
    rep(w, 0, n) if (j != w and i & (1 << w)) {
      dp[i][j] = max(dp[i][j],
                     dp[i ^ (1 << j)][w] + rules[mp(w + 1, j + 1)] + sat[j]);
    }
    if (__builtin_popcount(i) == m) ans = max(ans, dp[i][j]);
  }
  cout << ans << endl;


}
int main()
{
  // Skipped in presense of online judge.
#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif

  IOS()
  ll t = 1;
  // cin >> t;
  for (int ii = 1; ii <= t; ++ii)
    solve(ii);
}