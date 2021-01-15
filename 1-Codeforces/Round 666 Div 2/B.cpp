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
  cin >> n;
  vector<ll> a(n);
  for (auto &it : a) cin >> it;
  sort(all(a));
  ll c = 1, ans = LINF;

  while (1) {
    if (pow(c, (n - 1)) > INT_MAX) break;
    // deb(c)
    ll sum = 0, temp = 1;
    rep(i, 0, n) {
      sum += abs(temp - a[i]);
      temp *= c;
    }
    // deb(temp)
    ans = min(ans, sum);
    c++;
  }

  cout << ans << endl;
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