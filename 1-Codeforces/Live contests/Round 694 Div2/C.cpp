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


void solve() {
	ll n, m;
	cin >> n >> m;

	vector<ll> k(n), c(m);
	for (auto &it : k) cin >> it;
	for (auto &it : c) cin >> it;

	sort(all(k), big(ll));
	ll ans = 0;
	vector< bool> vis(n, false);
	ll i = 0;
	for (auto it : k) {
		i = min(i, it - 1);
		if (!vis[i]) {
			ans += c[i];
			vis[i] = true;
			i++;
		}
		else {
			ans += c[i];
		}
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