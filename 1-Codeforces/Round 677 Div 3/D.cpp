//Mark XXX
#include<bits/stdc++.h>

#define big(x)  greater<x>()
#define int     long long
#define mp      make_pair
#define pb      push_back
#define lb      lower_bound
#define ub      upper_bound
#define sp      fixed<<setprecision
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

vector<int> dad;

int find( int node ) {
    if( node == dad[node] ) return node;
    return dad[node] = find( dad[node] );
}

void solve() {
    int n;
    cin >> n;

    vector<int> vec( n );
    dad.assign( n + 1, 0 );
    iota( all( dad ), 0 );

    for( auto &it : vec ) cin >> it;

    vector< pair<int, int> > ans;
    for( int i = 0; i < n; ++i )
        for( int j = 1; j < n; ++j )
            if( vec[i] != vec[j] and find( i ) != find( j ) ) {
                dad[find( i )] = find( j );
                ans.pb( {i + 1, j + 1} );
            }
    if( ans.size() != ( n - 1 ) ) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    for( auto it : ans ) cout << it.first << " " << it.second << endl;
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