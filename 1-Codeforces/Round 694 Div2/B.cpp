//Mark XXXIII
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

#define endl			"\n"
#define PI              3.14159265
#define M               1e9+7
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

ll n, x;

void solve() {
	cin >> n >> x;
	vector<ll> arr(n);

	for (ll i = 0 ; i < n ; i++) cin >> arr[i];
	deque<pair<ll, ll>> dq;

	for (auto it : arr) dq.pb({it, 1});
	ll ans = 0;

	while (true) {
		auto [ele, fre] = dq.front();
		if (ele % x) break;
		else {
			ans += ele * fre;
			dq.pop_front();
			dq.pb({ele / x, fre * x});
		}
	}
	while (dq.size()) {
		auto [ele, fre] = dq.front();
		ans += ele * fre;
		dq.pop_front();
	}

	cout << ans << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
	IOS()
	ll t = 1;
	cin >> t;
	for (int i = 0; i < t; ++i)
		solve();
}