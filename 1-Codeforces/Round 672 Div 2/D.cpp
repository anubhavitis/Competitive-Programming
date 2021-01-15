//Mark XXX
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define int long long
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define PI 3.14159265
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define debaint(x) for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

//Code begins from here!!
vector<int> fac;

int  power(int  x, int y, int p)
{
  int  res = 1;
  x = x % p;
  while (y > 0) {
    if (y & 1)  res = (res * x) % p;

    y = y >> 1;
    x = (x * x) % p;
  }
  return res;
}

int  modInverse(int  n, int p)
{
  return power(n, p - 2, p);
}

int  nCr(int  n, int r, int p)
{
  if (r == 0) return 1;

  return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

void solve(void) {
  int n, k;
  cin >> n >> k;
  fac.assign(n+1,0);
  fac[0] = 1;
  for (int i = 1; i <= n; i++)  fac[i] = (fac[i - 1] * i) % M;

  vector< pair<int, int> > vec;
  for (int i = 0; i < n; ++i) {
    int l, r;
    cin >> l >> r;
    vec.pb(mp(l, 0));
    vec.pb(mp(r, 1));
  }
  sort(all(vec));

  int ans = 0, on = 0;
  for (auto it : vec)
    if (it.second == 0) {
      if (on >= (k - 1)) ans = (ans + nCr(on, k - 1, M)) % M;
      on++;
    }
    else on--;

  cout << ans;

}

int32_t main()
{

#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
  IOS()
  int t = 1;
  // cin >> t;

  while (t--)
    solve();

}