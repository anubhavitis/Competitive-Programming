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
ll dp[205][205][205];
vector<ll> rr, gg, bb;

ll solve(int r, int g, int b) {
  // cout << "----->" << r << " " << g << " " << b << endl;
  if ( ( r  and g  ) or ( r and b ) or ( b  and g  ) ) ;
  else return 0;

  if (dp[r][g][b] == -1) {
    dp[r][g][b] = 0;
    if (r and g ) dp[r][g][b] = max(dp[r][g][b], rr[r - 1] * gg[g - 1] + solve(r - 1, g - 1, b));
    if (r and b ) dp[r][g][b] = max(dp[r][g][b], rr[r - 1] * bb[b - 1] + solve(r - 1, g, b - 1));
    if (g and b ) dp[r][g][b] = max(dp[r][g][b], bb[b - 1] * gg[g - 1] + solve(r, g - 1, b - 1));
  }
  // cout << "<-----" << r << " " << g << " " << b << " " << dp[r][g][b] << endl;
  return dp[r][g][b];
}

void solve(void) {
  ll r, g, b;
  cin >> r >> g >> b;

  vector<ll> r1(r), g1(g), b1(b);
  rep(i, 0, r) cin >> r1[i];
  rep(i, 0, g) cin >> g1[i];
  rep(i, 0, b) cin >> b1[i];

  sort(all(r1));
  sort(all(g1));
  sort(all(b1));
  memset(dp, -1, sizeof(dp));

  rr = r1;
  gg = g1;
  bb = b1;

  cout << solve(r, g, b) << endl;
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