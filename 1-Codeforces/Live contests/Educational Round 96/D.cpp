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


	vector<int> cons;
	int cnt = 1;

	for( int i = 1; i < n; ++i )
		if( s[i] == s[i - 1] ) cnt++;
		else {
			cons.pb( cnt );
			cnt = 1;
		}
	cons.pb( cnt );

	int ans = 0;
	int l = 0, pos = -1;
	for( int i = 0; i < cons.size(); ++i ) if( cons[i] > 1 ) { pos = i; break; }

	if( pos == -1 ) {
		cout << cons.size() / 2 + cons.size() % 2 << endl;
		return;
	}

	for( int i = 0; i < cons.size(); ++i ) {
		cons[pos]--;
		ans++;
		if( pos == i or cons[pos] == 1 ) {
			while( pos < ( int )cons.size() ) { pos++; if( cons[pos] > 1 ) break;  }
			// cerr << pos << " " << i << endl;
			if( pos >= ( int )cons.size() ) {
				ans += ( ( int )cons.size() - i - 1 ) / 2 + ( ( int )cons.size() - i - 1 ) % 2;
				break;
			}
		}
		// cerr << pos << " " << ans << endl;
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
	cin >> t;

	while ( t-- )
		solve();

}