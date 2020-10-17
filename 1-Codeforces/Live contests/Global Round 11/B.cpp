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
	int n, k;
	string s;
	cin >> n >> k >> s;

	int sum = 0, cntw = 0, cntl = 0, f = 0;
	vector<int> ll;
	for( int i = 0; i < n; ++i ) {
		if( !f and s[i] == 'L' ) continue;

		if( s[i] == 'W' ) {
			if( cntl ) ll.pb( cntl );
			if( i and s[i - 1] == 'W' ) sum++;
			sum++;
			f = 1;
			cntl = 0;
			cntw++;
		}
		else {
			cntl++;
			cntw = 0;
		}
	}

	if( !sum ) {
		int val = min( k, n );
		if( val ) sum = 1 + 2 * ( val - 1 );
		cout << sum << endl;
		return;
	}

	sort( all( ll ) );
	for( int i = 0; i < ll.size(); ++i ) {
		if( !k ) break;
		int val = min( k, ll[i] );
		k -= val;
		if( val == ll[i] ) sum += 3 + 2 * ( val - 1 );
		else sum += 2 * val;
	}

	int cntf = 0;
	for( int i = 0; i < n and s[i] == 'L'; ++i ) cntf++;
	for( int i = n - 1; i >= 0 and s[i] == 'L'; --i ) cntf++;

	int val = min( k, cntf );
	sum += 2 * val;
	cout << sum << endl;
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
