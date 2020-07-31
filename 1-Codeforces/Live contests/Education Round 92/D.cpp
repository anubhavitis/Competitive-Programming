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

int i, j, n, k, z;

void solve(void) {
  ll l1, r1, l2, r2;
  cin >> n >> k >> l1 >> r1 >> l2 >> r2;
  int f = 0;
  if (l2 < l1) {
    swap(l1, l2), swap(r1, r2);
    if (r2 <= r1) f = 1;
  }
  else if (l2 == l1) {
    if (r2 < r1) swap(l1, l2), swap(r1, r2);
    f = 1;
  }
  else if (l2 <= r1) f = 1;
  // cerr << "( " << l1 << ", " << r1 << ") " << " ( " << l2 << ", " << r2 << ") " << endl;
  ll sum = 0;
  if (f) sum = min(r2, r1) - max(l2, l1);
  sum *= n;
  if (sum >= k) { deb(1) cout << "0\n"; return; }

  

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