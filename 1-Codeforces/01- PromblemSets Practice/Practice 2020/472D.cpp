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

int i, j, n, m;

void solve(void) {
  cin >> n;
  int arr[n][n];
  rep(i, 0, n) rep(j, 0, n) {
    cin >> arr[i][j];
    if (i == 0 and j and !arr[i][j]) { cout << "NO\n"; return; }
    if (i == j and arr[i][j]) { cout << "NO\n"; return; }
  }
  rep(i, 0, n) rep(j, 0, i) if (arr[i][j] != arr[j][i]) { cout << "NO\n"; return; }
  rep(i, 1, n) rep(j, 1, i) if (arr[i][j] != arr[0][j] + arr[i][0]) { cout << "NO\n"; return; }

  cout << "YES\n";
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
  // cin >> t;
  while (t--)
    solve();
}