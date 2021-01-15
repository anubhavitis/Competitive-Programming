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

vector<int> org( vector<int>& temp, vector<int> vec ) {
	vector<int> res;
	int n = temp.size();
	int L = vec.size();
	for( int i = n - 1; i >= 0; --i ) {
		int l = L;
		for( int j = l - temp[i]; j < l; ++j ) res.pb( vec[j] );
		L -= temp[i];
	}
	return res;
}

void solve() {
	int n;
	cin >> n;
	vector<int> vec( n );
	for( auto &it : vec ) cin >> it;
	int x = 0;
	vector< vector<int> > ans;
	vector<int> temp;

	if( vec[0] == n  or vec[n - 1] == 1 ) x++;
	for( int i = 1; i < n; ++i , ++x )
		if( x & 1 ) {
			temp.clear();
			int pos = 0;
			for( int j = 0; j < n; ++j )
				if( vec[pos] == i ) break;
				else pos++;
			//n-i-2
			if( pos ) temp.pb( pos );
			temp.pb( n - pos - i + 1 );
			for( int j = 1; j < i; ++j ) temp.pb( 1 );
			ans.pb( temp );
			vec = org( temp, vec );
		}
		else {
			temp.clear();
			for( int j = 1; j < i; ++j ) temp.pb( 1 );
			int pos = 0;
			for( int j = 0; j < n; ++j )
				if( vec[pos] == i ) break;
				else pos++;

			if( pos - i + 2 ) temp.pb( pos - i + 2 );
			if( n - 1 - pos ) temp.pb( n - 1 - pos );
			ans.pb( temp );
			vec = org( temp, vec );

			// cerr << i << " ";
			// deball( vec )
		}

	if( vec[0] != 1 ) {
		temp.clear();
		for( int j = 0; j < n; ++j ) temp.pb( 1 );
		ans.pb( temp );
	}

	cout << ans.size() << endl;
	for( auto it : ans ) {
		cout << it.size() << " ";
		for( auto jt : it ) cout << jt << " ";
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
	// cin >> t;

	while ( t-- )
		solve();

}