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
	int n, m;
	cin >> n;
	vi a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];
	cin >> m;
	vi b(m);
	for (int i = 0; i < m; ++i) cin >> b[i];

	vi prefa(n, 0), prefb(m, 0);
	prefa[0] = a[0];
	prefb[0] = b[0];

	for (int i = 1; i < n; ++i) prefa[i] = prefa[i - 1] + a[i];
	for (int i = 1; i < m; ++i) prefb[i] = prefb[i - 1] + b[i];

	int ma = -1, mb = -1;
	for (auto it : prefa) ma = max(it, ma);
	for (auto it : prefb) mb = max(it, mb);

	cout << max(0, max(ma, max(mb, ma + mb))) << endl;
	// cout << ma << endl;

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