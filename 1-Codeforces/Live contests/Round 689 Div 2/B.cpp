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

struct HASH {
	size_t operator()(const pair<int, int>&x)const {
		return (size_t) x.first * 37U + (size_t) x.second;
	}
};

//Code begins from here!!

void solve() {
	int n, m;
	cin >> n >> m;
	string s;
	char arr[n][m];
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < m; ++j) arr[i][j] = s[j];
	}

	int dp[n][m] = {};
	for (int i = 0; i < n; ++i) {
		int cnt = 0;
		for (int j = m - 1; j >= 0; --j) {
			if (arr[i][j] == '*') cnt++;
			else cnt = 0;
			dp[i][j] = cnt;
		}
	}

	ll ans = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			// if (dp[i][j])
			for (int x = 0; (i + x) < n and (j - x) >= 0; ++x)
				if (dp[i + x][j - x] >= (2 * x + 1)) {
					// cerr << i << " " << j << " " << x + 1 << endl;
					ans++;
				}
				else break;

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
