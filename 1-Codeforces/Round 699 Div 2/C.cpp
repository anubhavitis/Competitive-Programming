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

void print( vi &ans, int m) {
	cout << "YES\n";
	for (int i = 1 ; i <= m ; i++) cout << ans[i] << " ";
	cout << endl;
}

void solve() {
	int n, m;
	cin >> n >> m;
	vi a(n), b(n), c(m);

	for (auto &it : a) cin >> it;
	for (auto &it : b) cin >> it;
	for (auto &it : c) cin >> it;

	map<int, int> mp2;
	map<int, set<int> > C;
	for (int i = 0 ; i < n ; ++i) mp2[b[i]] = i + 1;
	for (int i = 0 ; i < m ; i++) C[c[i]].insert(i + 1);

	int last = 0;
	int var = 0;
	vi ans(m + 1 , -1);
	for (int i = 0 ; i < m ; ++i)
		if (mp2[c[i]]) {
			if (i + 1 >= last) {
				last = i + 1;
				var = mp2[c[i]];
			}
		}

	for (int i = 0 ; i < n ; ++i) {
		if (a[i] != b[i]) {
			if (C[b[i]].empty()) {
				cout << "NO" << endl;
				return;
			}

			auto it = C[b[i]].end();
			it--;

			ans[*it] = i + 1;
			if (*it >= last) {
				last = *it;
				var = i + 1;
			}

			C[b[i]].erase(it);
			a[i] = b[i];
		}
	}

	for (int i = 1 ; i <= m ; ++i)
		if (ans[i] == -1) {
			if (last >= i) ans[i] = var;
			else {
				cout << "NO\n";
				return;
			}
		}

	print(ans, m);
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

