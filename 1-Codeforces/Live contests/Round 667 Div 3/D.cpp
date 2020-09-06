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
ll j, n, k, z;

void solve(void) {
  ll s;
  cin >> n >> s;

  ll ans = 0, dig = 0, sum = 0, dups = n, pdig;
  while (dups) sum += dups % 10, dups /= 10, dig++;

  if (sum <= s) { cout << 0 << endl; return; }

  pdig = (s / 9 + (s % 9 != 0));
  cerr << s << " " << pdig << " " << dig << endl;
  if (dig < pdig) {
    ll temp = 1;
    for (int i = 1; i < pdig; ++i) temp *= 10;
    ans += temp - n;
    n = temp;
    dig = pdig;
  }

  dups = n;
  while (dups) sum += dups % 10, dups /= 10;

  sum = s - sum;

  for (unsigned ll i = 10; sum > 0 and n / i != 0; i *= 10) {
    ll d = n % i;
    d = d / (i / 10);
    ll dif = min( (ll)9 - d, sum);
    ans += dif * (i / 10);
    sum -= dif;
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
  cin >> t;

  while (t--)
    solve();
}