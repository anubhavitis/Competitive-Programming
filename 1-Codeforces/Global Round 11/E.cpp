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
#define deball(x)     for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)    for(i=b; i<c; ++i)
#define rrep(i,b,c)   for(i=b; i>=c; --i)

#define PI      3.14159265
#define M       (int)1000000007
#define LINF    LONG_MAX
#define INF     INT_MAX

using namespace std;

//Code begins from here!!

int helper( vector<int>& Num )
{
	int len, i, j, k;

	int n = Num.size();
	if ( !n ) return 0;

	vector<int> pref( n + 1, 0 );

	for ( int i = 1; i <= n; i++ ) pref[i] = pref[i - 1] + Num[i - 1];
	vector<vector<int> > dp( n + 1, vector<int>( n + 1 ) );

	for ( int i = 1; i <= n; i++ ) {
		dp[i][i] = 0;
	}

	for ( len = 2; len <= n; len++ )
		for ( i = 1; i <= n - len + 1; i++ ) {
			j = i + len - 1;

			int sum = pref[j] - pref[i - 1];
			dp[i][j] = INF;
			for ( k = i; k < j; k++ ) dp[i][j] = min( dp[i][j], dp[i][k] + dp[k + 1][j] + sum );
		}
	return dp[1][n];
}

void solve() {
	int n, x;
	cin >> n >> x;

	vector<int> arr( n );
	for( auto &it : arr ) cin >> it;

	cout << x*helper( arr ) << endl;


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

	while ( t-- )
		solve();

}