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
	int c1 = 0, c2 = 0;
	for (int i = 0; i < n; ++i) {
		int t;
		cin >> t;
		if (t == 1) c1++;
		else c2++;
	}
	if (!c1) {
		if (c2 % 2 == 0) cout << "YES\n";
		else cout << "NO\n";
		return;
	}
	if (!c2) {
		if (c1 % 2 == 0) cout << "YES\n";
		else cout << "NO\n";
		return;
	}

	if (c1 % 2 == 0 and c2 % 2 == 0) cout << "YES\n";
	else if (c2 % 2 == 0 and c1 % 2 == 1) cout << "NO\n";
	else if (c2 % 2 == 1 and c1 % 2 == 0) cout << "YES\n";
	else cout << "NO\n";
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