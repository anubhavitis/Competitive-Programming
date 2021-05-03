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
	int n, m, k;
	cin >> n >> m >> k;

	int dp[n + 1][m + 1] = {};

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			if (i == 1 and j == 1) continue;
			int cost = INF;
			if (j - 1 >= 1) cost = min(cost, dp[i][j - 1] + i);
			if (i - 1 >= 1) cost = min(cost, dp[i - 1][j] + j);
			dp[i][j] = cost;

		}
	}

	int dp2[n + 1][m + 1] = {};

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			if (i == 1 and j == 1) continue;
			int cost = 0;
			if (j - 1 >= 1) cost = max(cost, dp[i][j - 1] + i);
			if (i - 1 >= 1) cost = max(cost, dp[i - 1][j] + j);
			dp2[i][j] = cost;
		}
	}


	if (k >= dp[n][m] and k <= dp2[n][m]) cout << "YES\n";
	else cout << "NO\n";
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

