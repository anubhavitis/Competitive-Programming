//Mark XXXV
#include<bits/stdc++.h>

#define int              long long
#define ll				int
#define mp              make_pair
#define pb              push_back
#define lb              lower_bound
#define ub              upper_bound
#define all(x)          x.begin(), x.end()
#define big(x)          greater<x>()

#define sp              fixed<<setprecision
#define vi              vector<int>
#define vll				vector<ll>
#define vvi             vector<vi>
#define pi              pair<int,int>
#define vpi             vector<pi>
#define F               first
#define S               second

// #define endl            "\n"
#define PI              3.14159265
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
ll M = 1e9 + 7;
//Code begins from here!!

struct segTree {
	int sz;
	ll noOp = -1;
	vll vals, ops;

	void init(int n) {
		sz = 1;
		while (sz < n) sz *= 2;
		ops.assign(2 * sz, 0);
		vals.assign(2 * sz, 0);
	}

	void lazyP(int x, int lx, int rx) {
		if (rx - lx > 1 and ops[x] != noOp) {
			int lc = 2 * x + 1, rc = lc + 1;
			ops[lc] = ops[x];
			ops[rc] = ops[x];
		}
		if (ops[x] != noOp) vals[x] = (rx - lx) * ops[x];
		ops[x] = -1;
	}

	void update(int l, int r, ll v, int x, int lx, int rx) {
		lazyP(x, lx, rx);
		if (l >= rx or lx >= r) return;
		if (lx >= l and rx <= r) {
			ops[x] = v;
			lazyP(x, lx, rx);
			return;
		}

		int m = (lx + rx) >> 1, lc = 2 * x + 1, rc = lc + 1;

		update(l, r, v, lc, lx, m);
		update(l, r, v, rc, m, rx);

		vals[x] = vals[lc] + vals[rc];
	}

	void update(int l, int r, ll v) {
		update(l, r, v, 0, 0, sz);
	}


	ll find(int l, int r, int x, int lx, int rx) {
		lazyP(x, lx, rx);

		if (l >= rx or lx >= r) return 0;
		if (lx >= l and rx <= r) return vals[x];

		int m = (lx + rx) >> 1, lc = 2 * x + 1, rc = lc + 1;

		ll s1 = find(l, r, lc, lx, m);
		ll s2 = find(l, r, rc, m, rx);
		vals[x] = vals[lc] + vals[rc];
		return s1 + s2;
	}

	ll find(int l, int r) {
		return find( l, r, 0, 0, sz);
	}
};

signed main() {
#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
	IOS()

	int n, m;
	cin >> n >> m;

	segTree st;
	st.init(n);

	while (m--) {
		int t; cin >> t;

		if (t == 1) {
			int l, r, v; cin >> l >> r >> v;
			st.update(l, r, v);
			// cerr << "\n";
			// deball(st.ops)
			// deball(st.vals)
		}
		else {
			int l, r;
			cin >> l >> r;
			// cerr << l << " " << r << ": " << endl;
			cout << st.find(l, r) << endl;
			// cerr << "\n";
			// deball(st.ops)
			// deball(st.vals)
		}
	}
}

