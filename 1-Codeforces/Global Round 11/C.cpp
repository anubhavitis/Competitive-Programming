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
	int r, n;
	cin >> r >> n;

	vector<int> t( n ), x( n ), y( n );
	int j = 0;
	for( int i = 0; i < n; ++i ) {
		int a, b, c;
		cin >> a >> b >> c;
		if( a >= ( abs( b - 1 ) + abs( c - 1 ) ) ) { t[j] = a; x[j] = b; y[j++] = c; }
	}

	n = j;
	if( !n ) {cout << "0\n"; return ;}
	vector<int> dp( n, 1 ), pref( n, 1 );

	for( int i = 1; i < n; ++i ) {
		for( int j = i - 1; j >= max( ( int )0, i - 2 * r ); --j ) {

			int dx = ( abs( x[i] - x[j] ) + abs( y[i] - y[j] ) );
			int dt = ( t[i] - t[j] );

			if( dx <= dt ) dp[i] = max( dp[i], 1 + dp[j] );
		}
		if( i > 2 * r ) dp[i] = max( dp[i], 1 + pref[i - 2 * r] );
		pref[i] = ( max( dp[i], pref[i - 1] ) );
	}

	cout << pref[n - 1] << endl;

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
