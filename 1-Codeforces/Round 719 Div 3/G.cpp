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
#define LINF            1e18
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

int n, m;
ll w, arr[2001][2001];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

bool is(int i, int j) {
	return (i >= 0) and (i < n) and j >= 0 and j < m ;
}

vector<vll> bfs(int i, int j) {
	vector<vll> dist(n, vll(m, -1));

	queue<pi> q;
	q.emplace(i, j);
	dist[i][j] = 0;

	while (!q.empty()) {
		auto &[u, v] = q.front();
		q.pop();

		for (int i = 0; i < 4; ++i) {
			int x = u + dx[i], y = v + dy[i];
			if (is(x, y) and arr[x][y] != -1 and dist[x][y] == -1) {
				dist[x][y] = w + dist[u][v];
				q.emplace(x, y);
			}
		}
	}

	return dist;
}

void solve() {
	cin >> n >> m >> w;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) cin >> arr[i][j];

	auto d = bfs(0, 0), dr = bfs(n - 1, m - 1);
	ll px = LINF, py = LINF;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (arr[i][j] > 0) {
				if (d[i][j] != -1) px = min(px, arr[i][j] + d[i][j]);
				if (dr[i][j] != -1) py = min(py, arr[i][j] + dr[i][j]);
			}


	if ((px == LINF or py == LINF) and dr[0][0] == -1) {
		cout << "-1\n";
		return;
	}

	ll ans = LINF;

	if (dr[0][0] != -1) ans = dr[0][0];
	ans = min(ans, px + py);

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
	// cin >> t;

	for (int i = 0; i < t; ++i)
		solve();
}

