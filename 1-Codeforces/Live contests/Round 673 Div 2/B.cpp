//Mark XXX
#include<bits/stdc++.h>

#define big(x)  greater<x>()
#define int     long long
#define mp      make_pair
#define pb      push_back
#define lb      lower_bound
#define ub      upper_bound
#define all(x)  x.begin(), x.end()

#define IOS()         ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)        cerr<<#x<<" : "<<x<<"\n";
#define debaint(x)    for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define rep(i,b,c)    for(i=b; i<c; ++i)
#define rrep(i,b,c)   for(i=b; i>=c; --i)

#define PI      3.14159265
#define M       998244353
#define LINF    LONG_MAX
#define INF     INT_MAX

using namespace std;

//Code begins from here!!

void solve(void) {
  int n, t;
  cin >> n >> t;
  map<int, vector<int> > pos;
  for (int i = 0; i < n; ++i) {
    int temp; cin >> temp;
    pos[temp].pb(i);
  }

  vector<int> ans(n);
  for (auto it : pos) {

    int dif = t - it.first;
    if (dif == it.first) {
      int x = 0;
      for (auto i : it.second)
        if (!x) ans[i] = 1, x ^= 1;
        else ans[i] = 0, x ^= 1;
      continue;
    }
    for (auto i : it.second) ans[i] = 0;
    if (dif >= 0) for (auto i : pos[dif]) ans[i] = 1;
  }

  for (auto it : ans) cout << it << " ";
  cout << endl;
}

signed main()
{

#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
  IOS()
  int t = 1;
  cin >> t;

  while (t--)
    solve();

}