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
  int n, q;
  cin >> n;
  vector<int> v(n);
  for (int j = 0; j < n; ++j) {
    cin >> v[j];
    int i = 0;
    while ((1 << i) <= v[j]) i++;
    i--;
    v[j] = i;
  }
  // deball(v)
  map<int, int> mp;
  ll ans = 0;
  for (int j = n - 1; j >= 0; --j) {
    ans += mp[v[j]];
    mp[v[j]]++;
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