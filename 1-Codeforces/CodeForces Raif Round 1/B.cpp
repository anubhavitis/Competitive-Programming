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
	string s;
	cin >> n >> s;

	bool a = false, b = false;
	map<int, int> mapi;
	for( int i = 0; i < n; ++i ) {
		if( s[i] == '-' ) {
			mapi[i] = 1;
			mapi[( i + 1 ) % n] = 1;
		}
		else if( s[i] == '>' ) a = true;
		else b = true;
	}

	if( a and b ) {
		int res = 0;
		for( auto it : mapi ) res++;
		cout << res << endl;
	}
	else cout << n << endl;

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