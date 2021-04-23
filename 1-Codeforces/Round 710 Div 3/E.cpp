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
	int n;
	cin >> n;
	vi v(n);
	for (auto &it : v) cin >> it;

	vi lmin(n), lmax(n), cnt(n + 1, 1), ind;

	lmin[0] = lmax[0] = v[0];
	cnt[v[0]]--;

	for (int i = 1; i < n; ++i)
		if (v[i] != v[i - 1]) lmin[i] = lmax[i] = v[i], cnt[v[i]]--;
		else ind.pb(i);

	vi fills;
	for (int i = 1; i <= n; ++i)
		if (cnt[i]) fills.pb(i);

	deball(fills)

	for (int i = 0; i < ind.size(); ++i) {
		lmin[ind[i]] = fills[i];
		
	}

	for (auto it : lmin) cout << it << " ";
	cout << endl;
	for (auto it : lmax) cout << it << " ";
	cout << endl;

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

