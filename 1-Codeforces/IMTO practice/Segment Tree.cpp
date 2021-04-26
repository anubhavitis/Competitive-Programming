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

struct segTree {
	int sz;
	vector<vll> sums;
	vll inv;

	void init(int n) {
		sz = 1;
		while (sz < n) sz *= 2;
		sums.assign(2 * sz, vll(41, 0));
		inv.assign(2 * sz, 0);
	}

	ll combineINV(int x) {
		vll pl(41);
		for (int i = 1; i < 41; ++i)
			pl[i] = pl[i - 1] + sums[2 * x + 1][i];

		ll res = inv[2 * x + 1] + inv[2 * x + 2];
		for (int i = 1; i < 40; ++i) {
			res += sums[2 * x + 2][i] * (pl[40] - pl[i]);
		}

		return res;
	}

	vll combineS(int x) {
		vll res(41);
		for (int i = 1; i < 41; ++i)
			res[i] = sums[2 * x + 1][i] + sums[2 * x + 2][i];
		return res;
	}

	void build(vi &a, int x, int lx, int rx ) {
		if (rx - lx == 1) {
			if (lx < a.size()) {
				sums[x][a[lx]] = 1;
				return;
			}
			return;
		}

		int m = (lx + rx) >> 1;
		build(a, 2 * x + 1, lx, m);
		build(a, 2 * x + 2, m, rx);

		inv[x] = combineINV(x);
		sums[x] = combineS(x);
	}

	void build(vi &a) {
		build(a, 0, 0, sz);
	}

	void set(vi &a, int i, int v, int x, int lx, int rx) {
		if (rx - lx == 1) {
			sums[x][a[i]] = 0;
			a[i] = v;
			sums[x][v] = 1;
			return;
		}

		int m = (lx + rx) >> 1;
		if (i < m) set(a, i, v, 2 * x + 1, lx, m);
		else set(a, i, v, 2 * x + 2, m, rx);

		inv[x] = combineINV(x);
		sums[x] = combineS(x);
	}
	void set(vi &a, int i, int v) {
		set(a, i, v, 0, 0, sz);
	}


	pair< vll, ll> sum(int t, int l, int r, int tl, int tr) {
		if (r <= tl or l >= tr) return { vll(40, 0), 0};
		if (tl >= l and tr <= r) return { sums[t], inv[t] };

		int m = (tl + tr) >> 1;
		auto [v1, a1] = sum(2 * t + 1, l, r, tl, m);
		auto [v2, a2] = sum(2 * t + 2, l, r, m, tr);

		vll res(41);
		for (int i = 1; i < 41; ++i) res[i] = v1[i] + v2[i];

		vll pl(41);
		for (int i = 1; i < 41; ++i)
			pl[i] = pl[i - 1] + v1[i];

		ll ans = a1 + a2;
		for (int i = 1; i < 40; ++i) {
			ans += v2[i] * (pl[40] - pl[i]);
		}

		return  {res, ans};
	}

	ll sum(int x, int y) {
		auto [v, res] = sum(0, x, y, 0, sz);
		return res;
	}
};

signed main() {
#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
	IOS()

	int n, q;
	cin >> n >> q;

	vi v(n);
	for (auto &it : v) cin >> it;

	segTree st;
	st.init(n);
	st.build(v);

	while (q--) {
		int t, x, y; cin >> t >> x >> y;
		if (t & 1) cout << st.sum(x - 1, y) << endl;
		else st.set(v, x - 1, y);
	}
}

