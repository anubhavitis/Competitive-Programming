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
  cin >> n >> k;
  vector<ll> v(k, -1);
  string s;
  cin >> s;

  for (int i = 0; i < n; ++i) {
    if (s[i] == '?') continue;
    if (v[i % k] == -1 or (v[i % k] == s[i] - '0')) v[i % k] = s[i] - '0';
    else {
      cout << "NO\n";
      return;
    }
  }

  int c1 = 0, c0 = 0, cq = 0;
  for (auto it : v)
    if (it == 0) c0++;
    else if (it == 1) c1++;
    else cq++;

  if (c0 > k / 2 or c1 > k / 2) cout << "NO\n";
  else cout << "YES\n";


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