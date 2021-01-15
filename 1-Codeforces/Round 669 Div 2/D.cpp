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
// ll i, j, n, k, z;

void solve(void) {
  int n; cin >> n;
  int h[n], dp[n] = {};
  for (int i = 0; i < n; i++) cin >> h[i];
  stack<int> inc, dec;
  inc.push(0);
  dec.push(0);

  for (int i = 1; i < n; i++) {
    dp[i] = dp[i - 1] + 1;

    while ( !inc.empty() && h[inc.top()] < h[i]) {
      dp[i] = min(dp[inc.top()] + 1, dp[i]);
      inc.pop();
    }
    if ( !inc.empty() ) {
      dp[i] = min(dp[inc.top()] + 1, dp[i]);
      if (h[inc.top()] == h[i])inc.pop();
    }
    inc.push(i);

    while ( !dec.empty() && h[dec.top()] > h[i] ) {
      dp[i] = min(dp[dec.top()] + 1, dp[i]);
      dec.pop();
    }
    if ( !dec.empty() ) {
      dp[i] = min(dp[dec.top()] + 1, dp[i]);
      if (h[dec.top()] == h[i])dec.pop();
    }
    dec.push(i);
  }

  cout << dp[n - 1] << endl;
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
  // cin >> t;

  while (t--)
    solve();
}