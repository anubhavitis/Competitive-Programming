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
#define deball(x) for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i, j, n, k, w, m;

int answer(auto &v, int bl) {
  if (bl < 0) return 0;
  vector<int> l, r;
  for (auto it : v)
    if (it & (1 << bl)) l.pb(it);
    else r.pb(it);

  if (l.size() == 0) return answer(r, bl - 1);
  if (r.size() == 0) return answer(l, bl - 1);

  return (1 << bl) + min( answer(r, bl - 1), answer(l, bl - 1));
}
void solve(int t)
{
  cin >> n;
  vector<int> v(n);
  for (auto& it : v) cin >> it;
  cout << answer(v, 30) << endl;
}
int main()
{
  // Skipped in presense of online judge.
#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif

  IOS()
  ll t = 1;
  // cin >> t;
  for (int ii = 1; ii <= t; ++ii)
    solve(ii);
}