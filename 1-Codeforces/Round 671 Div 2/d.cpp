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

void solve(void) {
  ll i, j, k, n, m, ct = 0, t, ans = 0;
  cin >> n;
  ll a[n];
  rep(i, 0, n) cin >> a[i];
  sort(a, a + n);
  ll b[n] = {0}; j = 0;
  for (i = 1; i <= n - 2; i += 2) {
    b[i] = a[j];
    j++;
    k = j;
  }
  deb(k)deb(j)
  rep(i, 0, n) {
    if (b[i] == 0) {
      b[i] = a[j];
      j++;
    }
  }
  deb(j)
  for (i = 1; i <= n - 2; i++) {
    if (b[i - 1] > b[i] and b[i + 1] > b[i]) ct++;
  }
  cout << ct << endl;
  rep(i, 0, n) cout << b[i] << " ";
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