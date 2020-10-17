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
#define MAXN	200005

using namespace std;

//Code begins from here!!
int fwt[MAXN] = {};

void insert( int x ) {
	while( x <= MAXN ) {
		fwt[x]++;
		x += x & ( -x );
	}
}

int sum( int x ) {
	int res = 0;
	while( x > 0 ) {
		res += fwt[x];
		x -= x & -x;
	}
	return res;
}

void solve() {
	int n;
	string s, rs;
	cin >> n >> s;

	rs = s;
	reverse( all( rs ) );

	queue<int> st[26];
	for( int i = 0; i < n; ++i ) st[rs[i] - 'a'].push( i );

	vector<int> arr;
	for( int i = 0; i < n; ++i ) {
		arr.pb( st[s[i] - 'a'].front() + 1 );
		st[s[i] - 'a'].pop();
	}

	int ans = 0;

	for( int i = n - 1; i >= 0; --i ) {
		insert( arr[i] );
		ans += sum( arr[i] - 1 );
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
	int t = 1;
	// cin >> t;

	while ( t-- )
		solve();

}