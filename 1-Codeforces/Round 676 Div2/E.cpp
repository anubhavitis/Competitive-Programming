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
#define M               (int)1000000007
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
ll ans = NL;

map< vector<ll>  , bool> dp;

void helper(vector<ll> &vec) {
    int n = vec.size();
    
    if (dp[vec]) return;

    if (n == 1) {
        ans = max(ans, vec[0]);
        return;
    }

    for (int i = 0; i < n - 1; ++i) {
        vector<ll> temp;
        for (int j = 0; j < n; ++j)
            if (i == j) temp.pb(-1 * (vec[i] + vec[i + 1]));
            else if (j != (i + 1)) temp.pb(vec[j]);
        helper(temp);
    }

    dp[vec] = true;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (auto &it : vec) cin >> it;

    helper(vec);
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

    for (int i = 0; i < t; ++i)
        solve();
}