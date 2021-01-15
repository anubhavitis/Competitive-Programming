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

signed main() {

	#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
	#endif
	IOS()

	string s, res;
	cin >> s;

	int n = s.size(), ok = 1, x = 0;
	vector<int> alpha[26], sz( n );
	vector<string> ans( n );

	for( int i = n - 1; i >= 0; --i ) {
		res +=	 s[i];
		int res_n = res.size();

		alpha[s[i] - 'a'].pb( res_n - 1 );

		int last = -1;

		for( int j = 0; j < 26; ++j )
			if( alpha[j].size() and j != ( int )( s[i] - 'a' ) )
				last = max( last, alpha[j].back() );

		char ls = '#';
		if( last != -1 ) ls = res[last];

		if( res_n > 1 and res[res_n - 1] == res[res_n - 2] and ls < s[i] and ok ) {
			ok = 0;
			res_n -= 2;
			alpha[s[i] - 'a'].pop_back();
			alpha[s[i] - 'a'].pop_back();
			res.pop_back();
			res.pop_back();
		}
		else ok = 1;

		if( res_n <= 10 ) {
			ans[i] = res;
			reverse( all( ans[i] ) );
		}
		else {
			ans[i] = "";
			for( int j = 0; j < 5; ++j ) ans[i] += res[res_n - j - 1];
			ans[i] += "...";
			ans[i] += res[1];
			ans[i] += res[0];
		}

		sz[i] = res_n;
	}

	for( int i = 0; i < n; ++i ) cout << sz[i] << " " << ans[i] << endl;

}