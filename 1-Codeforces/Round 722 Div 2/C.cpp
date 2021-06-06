//Mark XXXIV
#include<bits/stdc++.h>

#define int             long long
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
vvi adj, dp;
vi l, r, vis;

void pre(int n) {
	l.assign(n, 0);
	r.assign(n, 0);
	vis.assign(n, 0);
	adj.assign(n, vi());
	dp.assign(n, vi(2, 0));
}

void dfs(int node) {
	vis[node]++;
	for (auto child : adj[node])
		if (!vis[child]) {
			dfs(child);
			dp[node][0] += max(
			                   abs(l[node] - l[child]) + dp[child][0],
			                   abs(l[node] - r[child]) + dp[child][1]
			               );
			dp[node][1] += max(
			                   abs(r[node] - l[child]) + dp[child][0],
			                   abs(r[node] - r[child]) + dp[child][1]
			               );
		}
}

void solve() {
	int n;
	cin >> n;
	pre(n);

	for (int i = 0; i < n; ++i)
		cin >> l[i] >> r[i];

	for (int i = 1; i < n; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u - 1].pb(v - 1);
		adj[v - 1].pb(u - 1);
	}

	dfs(0);
	cout << max(dp[0][0], dp[0][1]) << endl;
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

