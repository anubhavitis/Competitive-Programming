//Mark XXXIV
#include<bits/stdc++.h>

#define int              long long
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
	int n;
	cin >> n;

	vvi dp(n, vi(n, INT_MAX));
	vi zero, one;

	for (int i = 0; i < n; ++i) {
		int t; cin >> t;
		if (t) one.pb(i);
		else zero.pb(i);
	}

	int zn=zero.size(), on=one.size();

	for(int i=zn-1; i>=0; --i){
		for(int j=on-1; j>=0; --j){
			if(zn-i<on-j) continue;
			if(zn-i==1) dp[i][j]=abs(one[j]-zero[i]);
			else if()
			else dp[i][j]=min(dp[i+1][j], dp[i+1][j+1]);
		}
	}

	cout << dp[0][0] << endl;
	// for (auto [u, v] : dp) cerr << u.F << " " << u.S << ": " << v << endl;
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

