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

int i, j, n, k, z;

void solve(void) {

  cin >> n >> k >> z;
  vector<ll> v(n + 1), pref(n + 1, 0);;
  rep(i, 1, n + 1) cin >> v[i], pref[i] = pref[i - 1] + v[i];
  // deball(pref)
  ll mp = 0, sum = 0, x = 0;
  for (i = 0; i <= k; i++)
  {
    if (i + 1 < n)
      mp = max(mp, v[i + 1] + v[i + 2]);
    sum += v[i + 1];
    if ((k - i) % 2 == 0 && z >= (k - i) / 2)
    {
      x = max(x, sum + mp * (k - i) / 2);
    }
    // cerr << mp << " " << sum << " " << x << endl;
  }
  cout << x << endl;
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