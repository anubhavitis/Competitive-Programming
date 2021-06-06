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

int q(int x) {
	cout << "? 1 " << x + 1 << endl;
	int t; cin >> t;
	return t;
}

void solve() {
	int n, t, k;
	cin >> n >> t;

	vi sum(n, -1);
	set<int> got;
	while (t--) {
		cin >> k;

		int l = 0, r = n - 1, ans = 0;
		while (l <= r) {
			int m = (l + r) >> 1;
			if (sum[m] == -1) sum[m] = q(m);
			got.insert(m);
			if (m + 1 == sum[m] + k) {

				r = m - 1;
				ans = m;
			}
			else if (m + 1 > sum[m] + k) r = m - 1;
			else l = m + 1;
		}
		cout << "! " << ans + 1 << endl;
		auto it = got.lower_bound(ans);
		while (it != got.end())
			sum[*it++]++;
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

