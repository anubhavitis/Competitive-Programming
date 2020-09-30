//Mark XXX
#include<bits/stdc++.h>

#define big(x)  greater<x>()
#define int     long long
#define mp      make_pair
#define pb      push_back
#define lb      lower_bound
#define ub      upper_bound
#define all(x)  x.begin(), x.end()

#define IOS()         ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)        cerr<<#x<<" : "<<x<<"\n";
#define deball(x)    for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define rep(i,b,c)    for(i=b; i<c; ++i)
#define rrep(i,b,c)   for(i=b; i>=c; --i)

#define PI      3.14159265
#define M       998244353
#define LINF    LONG_MAX
#define INF     INT_MAX

using namespace std;

//Code begins from here!!

void solve(void) {
	int n;
	string s;
	cin >> n >> s;

	int dp[n + 1][3] = {};

	for (int i = 1; i <= n; ++i) {
		dp[i][0] = dp[i - 1][0];
		dp[i][1] = 2 * dp[i - 1][1];
		dp[i][2] = 2 * dp[i - 1][2];

		if (s[i - 1] == 'a') 		dp[i][0]++;
		else if (s[i - 1] == 'b')	dp[i][1] += dp[i][0];
		else if (s[i - 1] == 'c') 	dp[i][2] += dp[i][1];
		else {
			dp[i][2] += dp[i - 1][1];
			dp[i][1] += dp[i - 1][0];
			dp[i][0]++;
		}
	}

	for (int i = 0; i <= n; ++i) {
		cerr << dp[i][0] << " " << dp[i][1] << " " << dp[i][2] << endl;
	}
	cout << dp[n][2] << endl;

}

signed main()
{

#ifndef ONLINE_JUDGE
	freopen("/home/zeddie/Documents/input.txt", "r", stdin);
	freopen("/home/zeddie/Documents/output.txt", "w", stdout);
	freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
	IOS()
	int t = 1;
	// cin >> t;

	while (t--)
		solve();

}