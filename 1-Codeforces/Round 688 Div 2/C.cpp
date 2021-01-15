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

void solve() {
	int n; cin >> n;
	vector<string> arr(n);
	for (auto &it : arr) cin >> it;

	for (char d = '0'; d <= '9'; ++d) {
		int ans = 0;
		for (int r = 0; r < 4; ++r) {
			int m = -1;
			for (int i = 0; i < n; ++i)
				for (int j = 0; j < n; ++j)
					if (arr[i][j] == d) m = max(i, m);

			if (m == -1) continue;
			for (int i = 0; i < n; ++i)
				for (int j = 0; j < n; ++j)
					if (arr[i][j] == d)
						ans = max(ans, max(j, n - 1 - j) * abs(m - i));
			auto temp = arr;
			for (int i = 0; i < n; ++i)
				for (int j = 0; j < n; ++j)
					temp[i][j] = arr[j][n - 1 - i];
			arr = temp;
		}
		cout << ans << " ";
	}
	cout << "\n";
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
