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
vector<int> ans( 3, 0 ), A( 3, 0 ), B( 3, 0 );

void helper( int arr[], int n ) {
	if( n <= 0 ) return;

	for( int i = 0; i < 3; ++i )
		if( n >= arr[i] ) {
			n -= arr[i];
			ans[i]++;
			if( !n ) {A = ans; return; }
			helper( arr, n );
			n += arr[i];
			ans[i]--;
			if( A != B ) return;
		}
}

void solve() {
	ans.assign( 3, 0 );
	A.assign( 3, 0 );
	int n;
	cin >> n;
	int arr[] = {3, 5, 7};
	helper( arr, n );
	vector<int> t( 3, 0 );
	if( t == A ) cout << "-1\n";
	else {
		for( int i = 0; i < 3; ++i ) cout << A[i] << " ";
		cout << endl;
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