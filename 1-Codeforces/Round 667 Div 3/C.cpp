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
ll i, j, n, k, z;

void solve(void) {
  ll x, y;
  cin >> n >> x >> y;

  ll d = (y - x);
  ll L = INF, D = INF;
  for (int i = 1; i < n; ++i) {
    if (d % i != 0) continue;
    ll cd = d / i;
    ll f;
    for ( f = x; f > 0 and (1 + (y - f) / cd) != n; f -= cd);
    if (f < 1) f += cd;
    ll l = f + (n - 1) * cd;
    if (l < L ) L = l, D = cd;

  }

  for (int i = 0; i < n; ++i) { cout << L << " "; L -= D; }
  cout << endl;

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