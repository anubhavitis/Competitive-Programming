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
// ll i, j, n, k, z;

ll proj(ll A[], ll n, ll k)
{
  sort(A, A + n);
  ll product = 1;
  if (A[n - 1] == 0 && (k & 1))
    return 0;
  if (A[n - 1] <= 0 && (k & 1)) {
    for (ll i = n - 1; i >= n - k; i--)
      product *= A[i];
    return product;
  }
  ll i = 0;
  ll j = n - 1;
  if (k & 1) {
    product *= A[j];
    j--;
    k--;
  }
  k >>= 1;
  for (ll itr = 0; itr < k; itr++) {
    ll left_product = A[i] * A[i + 1];
    ll right_product = A[j] * A[j - 1];
    if (left_product > right_product) {
      product *= left_product;
      i += 2;
    }
    else {
      product *= right_product;
      j -= 2;
    }
  }

  // Finally return product
  return product;
}

void solve(void) {
  ll n; cin >> n;
  ll arr[n];
  for(ll i=0; i<n; ++i) cin>>arr[i];
  ll ans= proj(arr, n, 5);
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