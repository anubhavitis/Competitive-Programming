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

ll i, j, n, k, m;

void solve(void) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int x = min(a, min(b, c));
  if (x != 0) {
    a -= x - 1;
    b -= x - 1;
    c -= x - 1;
    d += x - 1;
  }
  int cnt = 0;
  if (a % 2 == 0) cnt++;
  if (b % 2 == 0) cnt++;
  if (c % 2 == 0) cnt++;
  if (d % 2 == 0) cnt++;

  int f = -1;
  if (cnt >= 3) f = 1;
  else f = 0;

  x = min(a, min(b, c));
  if (x != 0) {
    a -= x ;
    b -= x ;
    c -= x ;
    d += x ;
  }
  cnt = 0;
  if (a % 2 == 0) cnt++;
  if (b % 2 == 0) cnt++;
  if (c % 2 == 0) cnt++;
  if (d % 2 == 0) cnt++;

  if (cnt >= 3) f = max(f, 1);

  if (f) cout << "YES\n";
  else cout << "NO\n";
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