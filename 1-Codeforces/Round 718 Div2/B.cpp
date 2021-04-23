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
	int n, m; cin >> n >> m;

	vvi b(n, vi(m));
	set< vi > st;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			cin >> b[i][j];
			st.insert({b[i][j], i, j});
		}

	for (int k = 0; k < m; ++k) {
		auto it = *st.begin();
		int i = it[1], j = it[2];

		st.erase({b[i][j], i, j});
		st.erase({b[i][k], i, k});
		swap(b[i][j], b[i][k]);
		if (j != k) st.insert({b[i][j], i, j});
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
			cout << b[i][j] << " ";
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
	cin >> t;

	for (int i = 0; i < t; ++i)
		solve();
}

