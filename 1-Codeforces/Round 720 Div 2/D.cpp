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
vvi adj;
vi depth, dia, dad, leaf;

pi dfs(int node, int par, int h) {
	depth[node] = h;
	dad[node] = par;
	pi res = {node, h};
	for (auto child : adj[node])
		if (child != par) {
			auto [u, v] = dfs(child, node, 1 + h);
			if (v > res.S) res = {u, v};
		}
	leaf[node] = res.F;
	return res;
}

int makeDia(int n) {
	depth.assign(n + 1, 0);
	dad.assign(n + 1, 0);
	leaf.assign(n + 1, 0);
	dia.assign(n + 1, 0);
	auto [r, de] = dfs(1, 0, 0);

	cerr << r << " " << de << endl;
	auto [root, dep] = dfs(r, 0, 0);

	for (int i = root; i != 0; i = dad[i]) dia[i] = 1;
	return root;
}

vi ed;

void dfs2(int node, int par) {
	for (auto child : adj[node])
		if (child != par) {

			if (!dia[child]) ed.pb(child);
			else dfs2(child, node);
		}
}

void solve() {
	int n;
	cin >> n;

	adj.resize(n + 1);
	for (int i = 1; i < n; ++i) {
		int u, v;
		cin >> u >> v;

		adj[u].pb(v);
		adj[v].pb(u);
	}

	int root = makeDia(n);
	cout << root << endl;

	vvi ans;
	ed.clear();
	dfs2(root, 0);

	for()
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

