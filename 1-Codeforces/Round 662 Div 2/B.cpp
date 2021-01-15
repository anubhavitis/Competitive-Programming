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

ll i, j, n, k, z;
void solve(void) {
  cin >> n;
  vector<int> v(100001, 0);
  rep(i, 0, n) cin >> j, v[j]++;;
  int sum2 = 0, sum4 = 0;

  for (auto it : v) sum2 += (it / 2), sum4 += (it / 4);

  cin >> k;
  while (k--) {
    char ch;
    int x;
    cin >> ch >> x;
    sum2 -= v[x] / 2;
    sum4 -= v[x] / 4;
    if (ch == '+') v[x]++;
      else v[x]--;

    sum2 += v[x] / 2;
    sum4 += v[x] / 4;

    if (sum4 and sum2 >= 4) cout << "YES\n";
    else cout << "NO\n";
  }

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