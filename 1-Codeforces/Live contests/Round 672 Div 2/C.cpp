//Mark XXX
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define int long long
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define aint(x) x.begin(), x.end()
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

void rem( vector<int> &v, int &sum, int l ) {
  int n = v.size();
  n -= 2;
  if (l<1 or l > n) return;
  if (v[l] > v[l + 1] and v[l] > v[l - 1]) sum -= v[l];
  if (v[l] < v[l + 1] and v[l] < v[l - 1]) sum += v[l];
}
void join( vector<int> &v, int &sum, int l ) {
  int n = v.size();
  n -= 2;
  if (l<1 or l > n) return;

  if (v[l] > v[l + 1] and v[l] > v[l - 1]) sum += v[l];
  if (v[l] < v[l + 1] and v[l] < v[l - 1]) sum -= v[l];
}

void solve(void) {
  int n, q;
  cin >> n >> q;
  vector<int> v;
  v.pb(-1);
  for (int i = 0; i < n; ++i) {
    int temp;
    cin >> temp;
    v.pb(temp);
  }
  v.pb(-1);
  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    if (v[i] > v[i + 1] and v[i] > v[i - 1]) sum += v[i];
    if (v[i] < v[i + 1] and v[i] < v[i - 1]) sum -= v[i];
  }

  cout << sum << endl;

  while (q--) {
    int l, r;
    cin >> l >> r;

    for (int i = l - 1; i <= (l + 1); ++i) rem(v, sum, i);
    if (l != r) {
      if ((r - 1) != (l + 1) and (r - 1) != (l)) rem(v, sum, r - 1);
      if ((r) != (l + 1)) rem(v, sum, r);
      rem(v, sum, r + 1);
    }

    swap(v[l], v[r]);
    for (int i = l - 1; i <= (l + 1); ++i) join(v, sum, i);
    if (l != r) {
      if ((r - 1) != (l + 1) and (r - 1) != (l)) join(v, sum, r - 1);
      if ((r) != (l + 1)) join(v, sum, r);
      join(v, sum, r + 1);
    }
    cout << sum << endl;
  }
}

int32_t main()
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