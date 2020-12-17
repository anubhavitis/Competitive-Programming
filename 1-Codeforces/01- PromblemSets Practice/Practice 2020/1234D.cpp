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
vvi tree;
string str;

void build(int t, int s, int e) {
	if (s == e) {
		char ch = str[s];
		tree[t][ch - 'a'] = 1;
		return;
	}

	int m = (s + e) / 2, left = 2 * t;
	build( left, s, m);
	build( left + 1, m + 1, e);

	for (int i = 0; i < 26; ++i)
		tree[t][i] = tree[left][i] || tree[left + 1][i];
}

vi query(int t, int s, int e, int l , int r) {
	if (r<s or l>e) return vi(26, 0);
	if (s >= l and e <= r) return tree[t];

	int m = (s + e) / 2;
	int left = 2 * t;

	vi t1 = query( left, s, m, l, r), t2 = query( left + 1, m + 1, e, l, r);
	for (int i = 0; i < 26; ++i) t1[i] |= t2[i];
	return t1;
}

void update(int t, int pos, char val, int s, int e) {
	if (s == e) {
		char ch = str[pos];
		tree[t][ch - 'a'] = 0;
		tree[t][val - 'a'] = 1;
		str[pos] = val;
		return;
	}

	int m = (s + e) / 2, left = 2 * t;
	if (pos <= m) update(left, pos, val, s, m);
	else update(left + 1, pos, val, m + 1, e);

	for (int i = 0; i < 26; ++i)
		tree[t][i] = tree[left][i] || tree[left + 1][i];
}

void solve() {
	int q;
	cin >> str >> q;

	int n = str.size();
	tree.assign(4 * n, vi(26, 0));
	build(1, 0, n - 1);

	for (int i = 0; i < q; ++i) {
		int type;
		cin >> type;
		if (type & 1) {
			int pos; char ch;
			cin >> pos >> ch;
			update(1, pos - 1, ch, 0, n - 1);
		}
		else {
			int l, r;
			cin >> l >> r;
			vi ans = query(1, 0, n - 1, l-1, r-1);
			cout << accumulate(all(ans), 0) << "\n";
		}
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
