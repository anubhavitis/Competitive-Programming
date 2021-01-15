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

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;
void IO() {
  //Skipped in presense of online judge.
#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
}


ll power(ll x, ll y)
{
  ll res = 1;

  x = x % M;

  while (y > 0) {
    if (y & 1)  res = (res * x) % M;
    y = y >> 1;
    x = (x * x) % M;
  }
  return res;
}


void solve(void) {
  ll i, j, m, n, k;
  cin >> n;
  // if (n < 3) { cout << "0\n"; return; }

  ll fact[n + 1];
  fact[0] = 1;
  rep(i, 1, n + 1) {
    fact[i] = (fact[i - 1] * i) % M;
  }
  ll ans = (fact[n] - power(2, n - 1) + M) % M;
  cout << ans << endl;
}
int main()
{

  IO();
  IOS()
  ll t = 1;
  // cin >> t;
  while (t--)
    solve();
}