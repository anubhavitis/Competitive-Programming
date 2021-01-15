//Mark XXIX
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

//Code begins from here!!
ll i, j, n, k, z;

void solve(void) {
  string s;
  cin >> n >> s;

  set< pair<ll, ll> > ans[n + 1], solo[10];
  ll disl[n] = {}, disr[n] = {};
  ll cnt = 0;
  rep(i, 0, n) {
    if (s[i] != '0') disl[i] = cnt, cnt = 0;
    else cnt++;
  }

  cnt = 0;
  rrep(i, n - 1, 0) {
    if (s[i] != '0') disr[i] = cnt, cnt = 0;
    else cnt++;
  }

  rep(i, 0, n) solo[s[i] - '0'].insert(mp(i, i));
  ans[1] = solo[1];

  rep(i, 2, n + 1) {
    for (auto it : ans[i - 1]) {
      ll l = it.first, r = it.second;
      if (l != 0 and (s[l - 1] - '0') == 1) ans[i].insert(mp(l - 1, r));
      if (r != (n - 1) and (s[r + 1] - '0') == 1) ans[i].insert(mp(l, r + 1));
    }
    for (auto it : solo[i]) {
      ll pos = it.first;
      ll l = pos - disl[pos], r = pos + disr[pos];
      l = max(l, pos - i + 1);
      r = min(r, pos + i - 1);

      while((l+i-1)<=r) {
        ans[i].insert(mp(l,l+i-1));
        l++;
      }
    }
  }

  ll x=0;
  rep(i,1,n+1) {
    x+=ans[i].size();
    cerr<<i<<": \n";
    for(auto it: ans[i]) cerr<<it.first<<" "<<it.second<<endl;
  }

  cout<<x<<endl;

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