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

	vector< pi > v(n);
	vi ih(n), iw(n);
	for (int i = 0; i < n; ++i) cin >> v[i].first >> v[i].second, ih[i] = i, iw[i] = i;

	sort(all(ih), [&](int &i, int &j) {
		if (v[i].first < v[j].first and v[i].second < v[j].second) return true;
		if (v[i].first < v[j].second and v[i].second < v[j].first) return true;
		return false;
	});


	vector<int> ans(n, -1);
	for (int p = n - 2; p >= 0; --p) {
		int i = ih[p], j = ih[p + 1];

		if (v[i].first > v[j].first and v[i].second > v[j].second) ans[i] = j + 1;
		if (v[i].first > v[j].second and v[i].second > v[j].first) ans[i] = j + 1;
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