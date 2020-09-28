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
  ll odd = 0, even = 0;
  ll a[n + 1];
  for (i = 1; i <= n; i++) {
    scanf("%1d", &a[i]);
    if (i % 2 != 0) {
      if (a[i] % 2 == 0) even++;
    }
    else {
      if (a[i] % 2 != 0) odd++;
    }
  }

  ll n2 = (n + 1) / 2 - even, n3 = n / 2 - odd;
  ll digits = n;
  ll flag = 0;

  while (digits != 1) {
    if (flag == 0) {
      if (even > 0) {
        even--;
        flag = 1;
      }
      else {
        n2--;
        flag = 1;
      }
    }
    else {
      if (odd > 0) {
        odd--;
        flag = 0;
      }
      else {
        n3--;
        flag = 0;
      }
    }
    digits--;
  }

  if (even >= 1 || n3 >= 1) cout << "2\n";
  else cout << "1\n";

}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
  // IOS()
  ll t = 1;
  cin >> t;

  while (t--)
    solve();
}