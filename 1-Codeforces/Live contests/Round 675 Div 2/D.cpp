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

void solve()
{
	int n, m, sx, sy, dx, dy;
	cin >> n >> m >> sx >> sy >> dx >> dy;

	vector<int> x( m ), y( m ), pos( m ), dis( m );
	for( int i = 0; i < m; ++i )
	{
		cin >> x[i] >> y[i];

		dis[i] = min( abs( x[i] - sx ), abs( y[i] - sy ) );
		pos[i] = i;
	}

	vector< pair<int, int> > graph[m];

	sort( all( pos ), [&]( int a, int b )
	{
		return x[a] < x[b];
	} );


	for( int i = 1; i < m; ++i )
	{
		int d = abs( x[pos[i]] - x[pos[i - 1]] );

		graph[pos[i]].pb( {pos[i - 1], d} );
		graph[pos[i - 1]].pb( {pos[i], d} );
	}

	sort( all( pos ), [&]( int a, int b )
	{
		return y[a] < y[b];
	} );


	for( int i = 1; i < m; ++i )
	{
		int d = abs( y[pos[i]] - y[pos[i - 1]] );

		graph[pos[i]].pb( {pos[i - 1], d} );
		graph[pos[i - 1]].pb( {pos[i], d} );
	}

	set< pair<int, int> > src;
	for( int i = 0; i < m; ++i ) src.insert( {i, dis[i]} );

	while( !src.empty() )
	{
		auto [u, d] = *src.begin();
		src.erase( src.begin() );

		for( auto [v, d] : graph[u] )
			if( dis[u] + d < dis[v] ) {
				src.erase( {v, dis[v]} );
				dis[v] = dis[u] + d;
				src.insert( {v, dis[v]} );
			}
	}

	int ans = abs( sx - dx ) + abs( sy - dy );
	for( int i = 0; i < m; ++i ) ans = min( ans, dis[i] + abs( dx - x[i] ) + abs( dy - y[i] ) );
	cout << ans << endl;
}

signed main()
{

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