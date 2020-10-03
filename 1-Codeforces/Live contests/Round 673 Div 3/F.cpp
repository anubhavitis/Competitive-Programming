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
#define M       (int)1000000007
#define LINF    LONG_MAX
#define INF     INT_MAX

using namespace std;

//Code begins from here!!

void solve(void) {
	int n;
	string s;
	cin >> n >> s;

	int dp[3] = {}; int len=1;

	for (int i = 1; i <= n; ++i) {

		if (s[i - 1] == 'a') 		dp[0] = (dp[0]+len)%M;
		else if (s[i - 1] == 'b')	dp[1] = (dp[1] + dp[0])%M;
		else if (s[i - 1] == 'c') 	dp[2] = (dp[2] + dp[1])%M;
		else {
			dp[2] = (3 * dp[2] + dp[1])%M;
			dp[1] = (3 * dp[1] + dp[0])%M;
			dp[0] = (3 * dp[0] + len)%M;
			len= (3*len)%M;
		}
	}
	cout << dp[2] << endl;

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