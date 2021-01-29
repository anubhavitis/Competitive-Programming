//Mark XXXIV
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
#define vpi             vector<pi>
#define F               first
#define S               second

#define endl            "\n"
#define PI              3.14159265
// #define M               100000000
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
	int n, m;
	cin >> n >> m;
	vi a(n), b(n);
	for (auto &it : a) cin >> it;
	for (auto &it : b) cin >> it;

	vector<ll> p1, p2;
	ll sum = 0;
	for (int i = 0; i < n; ++i) {
		if (b[i] == 1) p1.pb(a[i]);
		else p2.pb(a[i]);
		sum += a[i];
	}

	sort(all(p1), big(ll));
	sort(all(p2), big(ll));

	if (sum < m) {
		cout << "-1\n";
		return;
	}

	for (int i = 1; i < p1.size(); ++i) p1[i] += p1[i - 1];
	for (int i = 1; i < p2.size(); ++i) p2[i] += p2[i - 1];

	int ans = 2 * (lb(all(p2), m) - p2.begin() + 1);

	for (int i = 0; i < p1.size(); ++i) {
		if (m > p1[i]) {
			int p = lb(all(p2), m - p1[i]) - p2.begin();
			ans = min(ans, i + 1 + 2 * (p + 1));
		}
		else {
			ans = min(ans, i + 1);
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
	int t = 1;
	cin >> t;

	for (int i = 0; i < t; ++i)
		solve();
}

