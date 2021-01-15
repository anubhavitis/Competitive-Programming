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
  string s, ans;
  cin >> s >> k;
  n = s.size();

  rep(i, 0, n) ans += '0';

  rep(i, 0, n) {
    if (s[i] == '1') {
      if ((i - k) >= 0) ans[i - k] = '1';
      if ((i + k) < n) ans[i + k] = '1';
    }
  }
  rep(i, 0, n) {
    if (s[i] == '0') {
      if ((i - k) >= 0) ans[i - k] = '0';
      if ((i + k) < n) ans[i + k] = '0';
    }
  }

  string temps;
  rep(i, 0, n) {
    if ((i - k) >= 0 and ans[i - k] == '1') temps += '1';
    else if ((i + k) < n and ans[i + k] == '1') temps += '1';
    else temps += '0';
  }

  if (temps == s) cout << ans << endl;
  else cout << "-1\n";
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