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

bool check(vector<int> dis, int x) {
  int arr[n + 1] = {};
  rep(i, 0, dis.size()) {
    j = i;
    int dup = dis[i];
    while (dup and j < n) {
      arr[j] = 1;
      dup--;
      j += x + 1;
    }
    if (dup) return 0;
  }
  return 1;
}

void solve(void) {
  cin >> n;
  vector<int> v(n + 1, 0);
  int m = 0, key;
  rep(i, 0, n) {
    cin >> j;
    v[j]++;
  }
  vector<int>dis;
  for (auto it : v) if (it) dis.pb(it);
  sort(all(dis), big(int));

  int l = 0, r = dis.size() - 1, mid, ans;
  while (l <= r) {
    mid = (l + r) / 2;

    if (check(dis, mid)) { ans = mid; l = mid + 1; }
    else r = mid - 1;
  }
  cout << ans << endl;

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