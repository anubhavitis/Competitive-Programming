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

ll i, j, n, k, m, d;

void solve(void) {
  cin >> n >> d >> m;
  vector<ll> a(n), g, b;
  rep(i, 0, n) {
    cin >> a[i];
    if (a[i] > m) b.pb(a[i]);
    else g.pb(a[i]);
  }
  vector<ll> prefb, prefg;

  ll pref = 0;
  sort(all(b), big(ll));
  for (auto it : b) pref += it, prefb.pb(pref);
  int q=prefb.size();

  pref = 0;
  sort(all(g), big(ll));
  for (auto it : g) pref += it, prefg.pb(pref);
  int p=prefg.size();

  if (!q) { cout << prefg[p - 1]; return; }

  ll ans = 0;
  rep(i, 1, q + 1) {
    int days = n - ((i - 1) * (d + 1) + 1);
    
    if (days < 0) break;
    ll sum = prefb[i - 1];
    
    if (p and days) sum += prefg[min(days - 1 , p - 1 )];
    
    ans = max(ans, sum);
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
  // cin >> t;
  while (t--)
    solve();
}