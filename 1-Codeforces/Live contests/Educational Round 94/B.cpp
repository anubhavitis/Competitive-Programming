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
int i, j, n, k, z;

void solve(void) {
  ll c1, c2, cnts, cnta, ws, wa;
  cin >> c1 >> c2 >> cnts >> cnta >> ws >> wa;

  ll ans = 0;
  ll x1 = 0, y1 = 0, x2 = 0, y2 = 0, WS1 = 0, WS2 = 0, WA1 = 0, WA2 = 0;

  for (i = 0; i <= cnts; ++i) {
    x1 = i;
    WS1 = x1 * ws;
    if (WS1 > c1) continue;

    WA1 = c1 - WS1;
    x2 = min(cnta, WA1 / wa);
    WA1 = x2 * wa;

    ll temp1 = min(c2 / ws, cnts - x1);
    ll prod1 = temp1 * ws;
    ll temp2 = min(c2 / wa, cnta - x2);
    ll prod2 = temp2 * wa;

    ll prod11 = min( (c2 - prod1) / wa, cnta - x2);
    ll prod22 = min( (c2 - prod2) / ws, cnts - x1);

    ans = max(ans, x1 + x2 + max(temp1 + prod11, temp2 + prod22));
  }
  cout<<ans<<endl;
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