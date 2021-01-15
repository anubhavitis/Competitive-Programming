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
	vector<int> vec( n );

	vector<int> cnt[3] = {};
	for( int i = 0; i < n; ++i ) {
		cin >> vec[i];
		int it = vec[i];
		if( it == 1 ) cnt[0].pb( it );
		else if( it == 2 ) cnt[1].pb( it );
		else cnt[2].pb( it );
	}

	if( cnt[1].size() > cnt[0].size() or vec[n - 1] != 1 ) {
		cout << "-1\n";
		return;
	}

	int mat[n][n] = {};
	int r = 0;
	for( auto it : cnt[1] ) {
		mat[r][it] = 1;
		mat[r][cnt[0].back()] = 1;
		cnt[0].pop_back();
		r++;
	}

	while( cnt[2].size() ) {
		int c = cnt[2].back();
		mat[r][c] = 1;
		mat[r][]
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