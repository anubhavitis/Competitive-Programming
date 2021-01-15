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

void solve() {
	int n;
	cin >> n;
	string s[n];
	for( auto &it : s ) cin >> it;

	vector< pair<int, int> > ans, ans1;

	if( s[0][1] != '0' ) ans.pb( {1, 2} );
	if( s[1][0] != '0' ) ans.pb( {2, 1} );
	if( s[n - 2][n - 1] != '1' ) ans.pb( {n - 1, n} );
	if( s[n - 1][n - 2] != '1' ) ans.pb( {n, n - 1} );


	if( s[0][1] != '1' ) ans1.pb( {1, 2} );
	if( s[1][0] != '1' ) ans1.pb( {2, 1} );
	if( s[n - 2][n - 1] != '0' ) ans1.pb( {n - 1, n} );
	if( s[n - 1][n - 2] != '0' ) ans1.pb( {n, n - 1} );
	if( ans.size() < ans1.size() ) {
		cout << ans.size() << endl;
		for( auto it : ans ) cout << it.first << " " << it.second << endl;
	}
	else {
		cout << ans1.size() << endl;
		for( auto it : ans1 ) cout << it.first << " " << it.second << endl;
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
	cin >> t;

	while ( t-- )
		solve();

}