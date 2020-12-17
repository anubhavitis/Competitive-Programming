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
vi val;
int l, r;

vector< pi> tree;
pi combine(pi a, pi b) {
	pi res;
	res.first = __gcd(a.first, b.first);
	res.second = 0;
	if (a.first == res.first) res.second += a.second;
	if (b.first == res.first) res.second += b.second;

	return res;
}

void build(int v, int tl, int tr) {
	if (tl == tr) {
		tree[v] = make_pair(val[tl], 1);
	} else {
		int tm = (tl + tr) / 2;
		build(v * 2, tl, tm);
		build(v * 2 + 1, tm + 1, tr);
		tree[v] = combine(tree[v * 2], tree[v * 2 + 1]);
	}
}

pi query(int v, int tl, int tr) {
	if (r<tl or l>tr) return {0, 0};
	if (tl >= l and tr <= r) return tree[v];

	int m = (tl + tr) / 2;
	int left = 2 * v;

	return combine(query(left, tl, m), query(left + 1, m + 1, tr));
}

void solve() {
	int n;
	cin >> n;
	val.resize(n);
	tree.resize(4 * n);
	vector<pi> p(n);
	for (int i = 0; i < n; ++i) {
		cin >> val[i];
		p[i] = {val[i], i};
	}

	sort(all(p));

	build(1, 0, n - 1);
	int q;
	cin >> q;
	while (q--) {
		cin >> l >> r;
		l--;
		r--;
		pi ans = query(1, 0, n - 1);

		cout << (r - l + 1) - ans.second << endl;
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
