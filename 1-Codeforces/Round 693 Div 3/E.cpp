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
#define F 				first
#define S 				second

#define endl			"\n"
#define PI              3.14159265
#define M               1e9+7
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


void solve() {
	int n;
	cin >> n;

	vector< pair< pi, int> > mens(n);

	for (int i = 0; i < n; ++i) {
		int u, v; cin >> u >> v;
		mens[i].F = {min(u, v), max(u, v)};
		mens[i].S = i;
	}
	
	sort(all(mens));
	vi ans(n, -1), val(n), ind(n);

	for (int i = 0; i < n; ++i) {
		val[i] = mens[i].F.S;
		ind[i] = mens[i].S;

		int pos = lb(all(mens), mp( mp( mens[i].F.F, -1), -1) ) - mens.begin() - 1;
		if (pos >= 0 and val[pos] < mens[i].F.S) ans[mens[i].S] = ind[pos] + 1;

		if (i and val[i] >= val[i - 1]) {
			val[i] = val[i - 1];
			ind[i] = ind[i - 1];
		}
	}

	for (auto it : ans) cout << it << " ";
	cout << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
	IOS()
	ll t = 1;
	cin >> t;
	for (int i = 0; i < t; ++i)
		solve();
}