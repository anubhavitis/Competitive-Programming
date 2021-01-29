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

void solve() {
	ll n; cin >> n;
	vector<ll> num(2 * n);
	for (auto &it : num) cin >> it;
	sort(all(num));

	vector<ll> x;
	for (int i = 0; i < 2 * n; i += 2) {
		if (num[i] != num[i + 1]) {
			cout << "NO\n";
			return;
		}
		if( x.size()>0 and num[i]==x.back()){
			cout<<"NO\n";
			return;
		}
		x.pb(num[i]);
	}


	ll c = 0;
	for (ll i = n - 1, div = 2 * n; i >= 0; --i, div -= 2) {
		x[i] -= 2 * c;
		if (x[i] <= 0) {
			cout << "NO\n";
			return;
		}
		ll r = x[i] % div, q = x[i] / div;

		if (r == 0 and q) c += q;
		else {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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

