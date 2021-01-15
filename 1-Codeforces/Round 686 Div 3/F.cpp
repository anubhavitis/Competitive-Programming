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

vvi adj;
vi dis, vis;
ll ans;

void dfs(int node, int dad, ll d) {
	dis[node] = d;
	vis[node]=1;
	for (auto child : adj[node])
		if (child!=dad and !vis[child]) {
			dfs(child, node, d + 1);
		}
		else if(child!=dad and vis[child]){
			// Length of cycle is dis[node]-dis[child]+1
		}
	vis[node]=0;
}

void solve() {
	ll n;
	cin >> n;
	adj.assign(n+1, vi());
	dis.assign(n+1, 0);
	vis.assign(n+1, 0);

	for (int i = 0; i < n; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	int leaf = 1;
	for (int i = 1; i <= n; ++i) if (adj[i].size() == 1) {
			leaf = i;
			break;
		}
	ans = 0;
	
	dfs(leaf, -1, 1);
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
