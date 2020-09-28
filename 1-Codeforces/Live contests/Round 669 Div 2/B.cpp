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

void solve(void) {
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];
  sort(a.begin(), a.end());
  bool avail[n] = {};
  avail[n - 1] = true;
  vector<int> ans(1, a[n - 1]);
  int gmax = a[n - 1];
  for (int i = 1; i < n ; ++i) {
    int temp = -1, key = -1;
    for (int j = 0; j < n; ++j) if (!avail[j] and temp < __gcd(gmax, a[j])) {
        key = j;
        temp = __gcd(gmax, a[j]);
      }
    avail[key] = 1;
    ans.pb(a[key]);
    gmax = __gcd(gmax, a[key]);
  }
  for (auto it : ans) cout << it << " ";
  cout << endl;
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