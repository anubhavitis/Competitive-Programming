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
  int x1, x2, x3, y1, y2, y3;
  cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;


  ll sum = 0, val;

  // 2 1
  val = min(y2, x3);
  x3 -= val;
  y2 -= val;
  sum += 2 * val;

  // 1 1
  val = min(x2, y2);
  x2 -= val;
  y2 -= val;
  

  // 2 2
  val = min(x3, y3);
  x3 -= val;
  y3 -= val;

  // 2 0
  val = min(x3, y1);
  x3 -= val;
  y1 -= val;

  // 1 0
  val = min(x2, y1);
  x2 -= val;
  y1 -= val;

  // 0 0
  val = min(x1, y1);
  x1 -= val;
  y1 -= val;

  // 0 2
  val = min(x1, y3);
  x1 -= val;
  y2 -= val;

  // 0 1
  val = min(x1, y2);
  x1 -= val;
  y2 -= val;

  // 1 2
  val = min(x2, y3);
  x2 -= val;
  y3 -= val;
  sum -= 2 * val;

  cout << sum << endl;
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