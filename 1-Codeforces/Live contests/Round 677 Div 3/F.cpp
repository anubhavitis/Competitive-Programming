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
#define INF             INT_MAX
#define NINF            INT_MIN

#define IOS()           ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)          cerr<<#x<<" : "<<x<<"\n";
#define deball(x)       for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)      for(i=b; i<c; ++i)
#define rrep(i,b,c)     for(i=b; i>=c; --i)

using namespace std;

//Code begins from here!!

#define mxn 1000

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vi DP(k, NINF);
    DP[0] = 0;

    for (int r = 0; r < n; ++r) {

        vi arr(m);
        vvi dp(m / 2 + 1, vi(k, NINF));

        for (int j = 0; j < k; ++j) dp[0][j] = DP[j];

        for (int j = 0; j < m; ++j) {
            cin >> arr[j];
            auto it = arr[j];

            auto temp = dp;
            for (int i = 1; i <= m / 2; ++i)
                for (int j = 0; j < k; ++j)
                    temp[i][(it + j) % k] = max(temp[i][(it + j) % k], dp[i - 1][j] + it);
            dp = temp;
        }

        DP.assign(k, NINF);
        for (int i = 0; i <= m / 2; ++i)
            for (int j = 0; j < k; ++j)
                DP[j] = max(DP[j], dp[i][j]);
    }
    cout << DP[0];
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