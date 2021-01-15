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
  cin >> n >> m;
  if (n > 3) { cout << "-1\n"; return; }
  if (n == 1) { cout << "0\n"; return; }

  string s[n];
  rep(i, 0, n) cin >> s[i];

  if (n == 2) {
    int a1 = 0, a2 = 0;
    rep(i, 0, m) {
      if ((s[0][i] - '0' + s[1][i] - '0') & 1) a1++;
      else a2++;
      swap(a1, a2);
    }
    cout << min(a1, a2);
    return;
  }

  int ee = 0, eo = 0, oe = 0, oo = 0;
  for (int i = 0; i < m; i++) {

    int bit1 = (s[0][i] - '0' + s[1][i] - '0') & 1;
    int bit2 = (s[1][i] - '0' + s[2][i] - '0') & 1;

    if (bit1 == bit2) {
      oe++;
      eo++;
      if (bit1 == 1 and i & 1 ) oo++;
      else if (bit1 == 1) ee++;
      else if (bit1 == 0 and i & 1) ee++;
      else if (bit1 == 0) oo++;
    }
    else {
      oo++;
      ee++;
      if (bit1 == 0 and i & 1) eo++;
      else if (bit1 == 0) oe++;
      else if (bit1 == 1 and i & 1) oe++;
      else if (bit1 == 1) eo++;
    }
  }

  cout << min(ee, min(eo, min(oo, oe))) << endl;

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