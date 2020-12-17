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

struct HASH {
	size_t operator()(const pair<int, int>&x)const {
		return (size_t) x.first * 37U + (size_t) x.second;
	}
};

//Code begins from here!!
ll n, q, s;
map<ll, ll> ans;

void build(ll tx, ll l, ll r, vector<ll> &val, vector<ll> &tree) {
	if (l > r) return;
	if (l == r) {
		tree[tx] = val[l];
		ans[tree[tx]] = 1;
		return;
	}

	if (val[l] == val[r]) {
		tree[tx] = (r - l + 1) * val[l];
		ans[tree[tx]] = 1;
		return;
	}

	ll sum = (val[l] + val[r]) / 2;
	ll m = ub(all(val), sum) - val.begin() - 1;
	ll left = 2 * tx;


	if (m >= l and m < r) {
		build(left, l, m, val, tree);
		build(left + 1, m + 1, r, val, tree);
		tree[tx] = tree[left] + tree[left + 1];

		ans[tree[tx]] = 1;
	}
}

void solve() {
	cin >> n >> q;
	ans.clear();
	vector<ll> val(n), tree(5 * n, 0);
	for (auto &it : val) cin >> it;

	sort(all(val));
	build(1, 0, n - 1, val, tree);

	while (q--) {
		cin >> s;
		if ( ans[s]) cout << "YES\n";
		else cout << "NO\n";
	}
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
