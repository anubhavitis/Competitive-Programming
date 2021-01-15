//Mark XXXII
#include<bits/stdc++.h>

#define int             long long
#define mp              make_pair
#define pb              push_back
#define lb              lower_bound
#define ub              upper_bound
#define all(x)          x.begin(), x.end()
#define big(x)          greater<x>()

#define sp              fixed<<setprecision
#define vi              vector<int>
#define vvi             vector<vi>
#define pi              pair<int,int>

#define PI              3.14159265
#define M               (int)1000000007
#define LINF            LONG_MAX
#define INF             1e9

#define IOS()           ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)          cerr<<#x<<" : "<<x<<"\n";
#define deball(x)       for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)      for(i=b; i<c; ++i)
#define rrep(i,b,c)     for(i=b; i>=c; --i)

using namespace std;

//Code begins from here!!

#define mxn 1000

int n, m, k;
vector<vector<pair<int, int>>> graph;
int edges[mxn][2], cou[mxn][2];

void dijkstra( int node, vector<int> &d ) {
    d.assign( n, INF );
    d[node] = 0;
    set< pi > s;
    s.insert( {d[node], node} );
    while ( !s.empty() ) {
        int u = s.begin()->second;
        s.erase( s.begin() );
        for ( auto [child, wi] : graph[u] ) {
            if ( d[child] > d[u] + wi ) {
                d[child] = d[u] + wi;
                s.insert( {d[child], child} );
            }
        }
    }
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
    freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
    freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
    IOS()

    cin >> n >> m >> k;

    graph.resize( n );

    //Graph input, and edges stored.
    for ( int i = 0; i < m; ++i ) {
        int u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;
        graph[u].pb( mp( v, w ) );
        graph[v].pb( mp( u, w ) );
        edges[i][0] = u;
        edges[i][1] = v;
    }

    vvi dist( n );
    for ( int i = 0; i < n; ++i ) dijkstra( i, dist[i] );

    //Couriers stored in cou
    for ( int i = 0; i < k; ++i ) {
        int u, v;
        cin >> u >> v;
        cou[i][0] = u - 1;
        cou[i][1] = v - 1;
    }

    // Brute force!!!
    int ans = INF;
    for ( int i = 0; i < m; ++i ) {
        int total = 0, u = edges[i][0], v = edges[i][1];

        for ( int j = 0; j < k; ++j ) {
            int a = cou[j][0], b = cou[j][1];
            total += min( {
                dist[a][b],
                dist[a][u] + dist[v][b],
                dist[a][v] + dist[u][b]
            } );
        }

        ans = min( ans, total );
    }

    cout << ans << endl;
}