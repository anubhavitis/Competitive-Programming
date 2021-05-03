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
#define vll				vector<ll>
#define pi              pair<int,int>
#define vpi             vector<pi>
#define F               first
#define S               second

// #define endl            "\n"
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
	int n, m, x;
	cin >> n >> m >> x;
	vi ans(n);
	vpi a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i].F;
		a[i].S = i;
	}

	priority_queue< pi> pq;
	sort(all(a), big(pi));

	for (int i = 0; i < m; ++i) {
		pq.push({ -a[i].F, i + 1});
		ans[a[i].S] = i + 1 ;
	}

	for (int i = m; i < n; ++i) {
		auto [u, v] = pq.top();
		pq.pop();

		u -= a[i].F;
		ans[a[i].S] = v;

		pq.push({u, v});
	}

	int mx = -1, mm = INF;

	while (!pq.empty()) {
		auto [u, v] = pq.top();
		pq.pop();
		u = -u;

		mx = max(mx, u);
		mm = min(mm, u);
	}

	if (mx - mm > x) cout << "NO\n";
	else {
		cout << "YES\n";
		for (auto it : ans) cout << it << " ";
		cout << endl;
	}
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

