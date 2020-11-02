//Mark XXXII
#include<bits/stdc++.h>

#define ll              long long
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

void solve() {
    int n, y, ind ;
    cin >> n >> y >> ind;

    ll x = 1;
    vector<ll> fact(1, 1);
    for (int i = 1; i <= n; ++i) x = (x * i) % M, fact.pb(x);

    int l = y - 1, r = n - y;
    ll ans=1;
    
    int l1 = 0, r1 = n;
    while (l1 < r1) {
        int mid = (l1 + r1) / 2;
        if (mid == ind) {
            ans = (ans * fact[r+l]) % M;
            break;
        }
        if (mid < ind) {
            ans = (ans * l) % M;
            l1 = mid + 1;
            l=max(l-1, 0);
        }
        else {
            ans = (ans * r) % M;
            r1 = mid;
            r=max(r-1,0);
        }
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
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();
}