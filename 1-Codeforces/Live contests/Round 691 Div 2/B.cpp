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
int n, m;
int arr[] = { 4, 4, 12, 9, 24, 16, 40, 25, 60, 36, 84, 49, 112, 64, 144, 81,
              180, 100, 220, 121, 264, 144, 312, 169, 364, 196, 420, 225,
              480, 256, 544, 289, 612, 324, 684, 361, 760, 400, 840, 441,
              924, 484, 1012, 529, 1104, 576, 1200, 625, 1300, 676, 1404,
              729, 1512
            };
void solve() {
	cin >> n;
	int ans = 0;
	if (n & 1) {
		int start = 2;
		for (int i = 0 ; i < (n + 1) / 2 ; ++i) {
			ans += start;
			start += 2;
		}
		ans += ans;
	}
	else {
		int start = 1;
		for (int i = 0 ; i < (n >> 1) ; ++i) {
			ans += start;
			start += 1;
		}
		ans += ans + start;
	}
	cout << ans << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
	IOS()
	ll t = 1;
	// cin >> t;

	for (int i = 0; i < t; ++i)
		solve();
}