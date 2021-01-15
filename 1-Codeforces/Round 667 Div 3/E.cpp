//Mark XXX
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

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

//Code begins from here!!
ll j, n, k, z;

void solve(void) {
  cin >> n >> k;
  vector<int> x(n), y(n);
  for (auto& it : x) cin >> it;
  for (auto& it : y) cin >> it;

  sort(x.begin(), x.end());

  vector<int> temp(n), pref(n), suff(n);
  for (int i = 0; i < n; ++i) {
    int p2 = lb(all(x), x[i] - k) - x.begin();
    int p1 = ub(all(x), x[i]) - x.begin() - 1;
    pref[i] = p1 - p2 + 1;
  }

  for (int i = n - 1; i >= 0; --i) {
    int p1 = lb(all(x), x[i]) - x.begin();
    int p2 = ub(all(x), x[i] + k) - x.begin() - 1;
    suff[i] = p2 - p1 + 1;
    if (i != (n - 1)) suff[i] = max(suff[i], suff[i + 1]);
  }
  suff.pb(0);
  pref.pb(0);
  ll ans = 0;
  for (int i = 0; i < n; ++i)
    if (x[i] != x[i + 1])
      ans = max((int)ans, pref[i] + suff[i + 1]);
  cout << ans << endl;


}

int main()
{

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