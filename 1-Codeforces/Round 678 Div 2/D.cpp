//Mark XXXII
#include<bits/stdc++.h>

#define ll             long long
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
#define M               1000000007
#define LINF            LONG_MAX
#define NL              LONG_MIN
#define INF             INT_MAX
#define NI              INT_MIN

#define IOS()           ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)          cerr<<#x<<" : "<<x<<"\n";
#define deball(x)       for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)      for(i=b; i<c; ++i)
#define rrep(i,b,c)     for(i=b; i>=c; --i)

using namespace std;

//Code begins from here!!

#define mxn 1000

vvi adj;
vector<ll> val, leaf, tot, dp;

void dfs(int node) {
    tot[node]=val[node];

    if (adj[node].size() == 0) {
        leaf[node] = 1;
    }
    for (auto child : adj[node]) {
        dfs(child);
        leaf[node] += leaf[child];
        tot[node] += tot[child];
        dp[node] = max(dp[node], dp[child]);

    }
    
    dp[node] = max(dp[node], (tot[node] + leaf[node] - 1) / leaf[node]);
}

    
void solve() {
    int n;
    cin >> n;
    adj.resize(n + 1);
    for (int i = 2; i <= n; ++i) {
        int u;
        cin >> u;
        adj[u].pb(i);
    }
    val.resize(n + 1);
    for (int i = 1; i <= n; ++i) cin >> val[i];

    leaf.resize(n+1);
    tot.resize(n+1);
    dp.resize(n+1);
    dfs(1);
    
    //  deball(leaf)
    // deball(tot)
    // deball(dp)

    cout << dp[1] << endl;
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

    for (int i = 0; i < t; ++i)
        solve();
}