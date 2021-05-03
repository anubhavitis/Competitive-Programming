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
 
void solve() {
	int n, l, r;
	cin >> n >> l >> r;
 
	multiset<int> sl, sr;
	for (int i = 0; i < l; ++i) {
		int t; cin >> t;
		sl.insert(t);
	}
	for (int i = 0; i < r; ++i) {
		int t; cin >> t;
		auto it = sl.lb(t);
		if (it == sl.end() or * it != t) sr.insert(t);
		else sl.erase(it);
	}
 
	l = sl.size(), r = sr.size();
 
	// for (auto it : sl) cerr << it << " ";
	// cerr << endl;
	// for (auto it : sr) cerr << it << " ";
	// cerr << endl;
 
	if (l == r) {
		cout << l << endl;
		return;
	}
 
	if (r > l) {
		swap(sl, sr);
		swap(l, r);
	}
 
	int diff = (l - r) >> 1, cnt = 0;
	unordered_map<int, int> ml;
	for (auto it : sl) ml[it]++;
	for (auto [u, v] : ml) cnt += v / 2;
 
	if (cnt >= diff) {
		cout << r + diff << endl;
		return;
	}
 
	int ans = r + cnt + 2 * (diff - cnt);
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