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
int n, m, k;

bool valid(int i, int j) {
	return (i >= 0 and i<n and j >= 0 and j < m);
}

void solve() {
	cin >> n >> m >> k;

	int right[n][m - 1], down[n - 1][m];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m - 1; ++j) cin >> right[i][j];

	for (int i = 0; i < (n - 1); ++i)
		for (int j = 0; j < m; ++j) cin >> down[i][j];

	if (k & 1) {
		vvi ans(n, vi(m, -1));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) cout << ans[i][j] << " ";
			cout << endl;
		}
		return;
	}
	vvi ans(n, vi(m, 0));


	for (int x = 1; x <= k / 2; ++x) {
		vvi temp(n, vi(m, 0));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				int arr[] = {1, 0, -1, 0, 0, 1, 0, -1};
				int val = INT_MAX;
				for (int p = 0; p < 8; p += 2)
					if (valid(i + arr[p], j + arr[p + 1])) {
						int x = i + arr[p], y = j + arr[p + 1];
						if (i == x) {
							if (y < j) val = min(val, ans[x][y] + 2 * right[x][y] );
							else val = min(val, ans[x][y] + 2 * right[x][j] );
						}
						else {
							if (x < i) val = min(val, ans[x][y] + 2 * down[x][y] );
							else val = min(val, ans[x][y] + 2 * down[i][y] );
						}
					}
				temp[i][j] = val;
				// deb(val)
			}
		}
		ans = temp;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) cout << ans[i][j] << " ";
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
	// cin >> t;

	for (int i = 0; i < t; ++i)
		solve();
}

