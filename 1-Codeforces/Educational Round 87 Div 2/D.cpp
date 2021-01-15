//Mark XXVI
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
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;
int i, j, n;
vector<int> bit;

void add(int val, int ind) {
  while (ind <= n) {
    bit[ind] += val;
    ind += ind & (-ind);
  }
}

int pref(int r) {
  int sum = 0;
  while (r > 0) {
    sum += bit[r];
    r -= r & (-r);
  }
  return sum;
}

void solve()
{
  int q;
  cin >> n >> q;
  int cnt[n+1]={};
  bit.assign(n + 1, 0);
  for (i = 0; i < n; ++i) {
    cin >> j;
    cnt[j]++;
    add(1, j);
  }

  for (int k = 0; k < q; ++k) {
    cin >> j;
    if (j > 0) add(+1, j), cnt[j]++;
    else {
      j *= -1;
      int l = 0, r = n+1, mid;
      while (l < r) {
        mid = (l + r) / 2;
        int sum = pref(mid);
        if (sum >= j) r = mid;
        else l = mid+1;
      }
      add(-1, l);
      cnt[l]--;
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; ++i) if ( pref(i) ) { ans = i; break; }
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
  // cin>>t;
  while (t--)
    solve();
}