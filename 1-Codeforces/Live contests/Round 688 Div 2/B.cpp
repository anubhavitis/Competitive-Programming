//Mark XXXII
#include<bits/stdc++.h>

#define ll              long long
#define mp              make_pair
#define pb              push_back
#define lb              lower_bound
#define ub              upper_bound
#define all(x)          x.begin(), x.end()
#define big(x)          greater<x>()

#define sp              fixed<<setprecision
#define vi              vector<int>
#define vvi             vector<vi>
#define pi              pair<int,int>

#define PI              3.14159265
#define M               998244353
#define LINF            LONG_MAX
#define NL              LONG_MIN
#define INF             INT_MAX
#define NI              INT_MIN

#define IOS()           ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)          cerr<<#x<<" : "<<x<<"\n";
#define deball(x)       for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)      for(i=b; i<c; ++i)
#define rrep(i,b,c)     for(i=b; i>=c; --i)

using namespace std;

//Code begins from here!!

void solve() {
	ll n, m;
	cin >> n;
	vector<ll> v(n);
	for (auto &it : v) cin >> it;

	vector<ll> diff(n, 0);
	m = -1;
	ll sum = 0;
	for (ll i = n - 2; i >= 0; --i) {
		diff[i] = abs(v[i] - v[i + 1]);
		sum += diff[i];
	}
	vector<ll> ans(n, 0);
	ll res = 9223372036854775807;
	for (ll i = 0; i < n; ++i) {
		if (!i) {
			ans[i] = sum - abs(v[0] - v[1]);
		}
		else if (i == n - 1) {
			ans[i] = sum - abs(v[n - 1] - v[n - 2]);
		}
		else {
			ll temp = sum - abs(v[i] - v[i - 1]) - abs(v[i] - v[i + 1]);
			ans[i] = temp + abs(v[i - 1] - v[i + 1]);
		}
		res = min(res, ans[i]);
	}
	// deball(ans)
	cout << res << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
	IOS()
	int t = 1;
	cin >> t;

	for (int i = 0; i < t; ++i)
		solve();
}
