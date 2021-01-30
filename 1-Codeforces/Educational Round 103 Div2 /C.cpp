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
map<ll, int> vis;
map<ll, vector<pair<ll, ll>>> mpi;
map<ll, ll> val;
ll d = 0;

void dfs(ll node, ll w) {
	vis[node] = 1;
	val[node] = w;
	for (auto [v, l] : mpi[node]) {
		if (vis[v] == 1) {
			d = max(d, w + l - val[v] );
		}
		else dfs(v, w + l);
	}
	vis[node] = 0;
}

void solve() {
	int n; cin >> n;
	d = 0;
	vis.clear();
	mpi.clear();
	val.clear();

	vi c(n), a(n), b(n);
	for (auto &it : c) cin >> it;
	for (auto &it : a) cin >> it;
	for (auto &it : b) cin >> it;

	vector<vector<ll>> edges;
	ll u = a[1], v = b[1], k = c[0];
	edges.pb({u, v, abs(u - v)});

	for (int i = 1; i < n; ++i) {
		if (i > 1) {

			int x = a[i] + k, y = b[i] + k;
			if (x == y) {
				edges.pb({u, x, abs(u - x) });
				edges.pb({v, x, abs(v - x) });
			}
			else if (x < y) {
				edges.pb({u, x, abs(u - x)});
				edges.pb({x, y, abs(x - y)});
				edges.pb({v, y, abs(v - y)});
			}
			else {
				edges.pb({u, y, abs(u - y)});
				edges.pb({x, y, abs(x - y)});
				edges.pb({v, x, abs(v - x)});
			}
			k += c[i - 1];
			u = x;
			v = y;
		}

		edges.pb({u, 1 + k, 1});
		edges.pb({c[i] + k, v, 1});
		u = 1 + k;
		v = c[i] + k;
	}
	edges.pb({u, v, abs(u - v)});

	for (auto it : edges) {
		ll x = it[0], y = it[1], w = it[2];
		mpi[x].pb(mp(y, w));
		mpi[y].pb(mp(x, w));
	}

	ll ans = 0;
	for (auto [key, val] : mpi) {
		if (vis[key] == 0) {
			dfs(key, 0);
		}
	}
	cout << d << endl;
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

