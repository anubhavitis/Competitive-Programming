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

string cnt(string a) {
	string res;
	int n = a.size();
	for (int i = 0; i < n; ++i) {
		res.pb(a[i]);
		int c = 0, j = 0;
		while (j < n and c != -1) {
			if (j + i >= n) {
				c = -1;
				break;
			}
			for (int p = 0; p <= i; ++p)
				if (res[p] != a[p + j]) {
					c = -1;
					break;
				}

			j += i + 1;
		}
		if (c != -1) return res;
	}
	return "-1";
}

void solve() {
	string a, b;
	cin >> a >> b;
	if (a.size() > b.size()) swap(a, b);

	string ra = cnt(a);
	string rb = cnt(b);
	if (ra != rb) {
		cout << "-1\n";
		return;
	}

	int x = a.size() / ra.size(), y = b.size() / ra.size();
	int z = (x * y) / __gcd(x, y);

	for (int i = 0; i < z; ++i) cout << ra;
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
	cin >> t;

	for (int i = 0; i < t; ++i)
		solve();
}

