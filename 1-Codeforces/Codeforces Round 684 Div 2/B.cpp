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
ll n, k;

void solve() {
    cin >> n >> k;
    vector<ll> v(n * k + 1, 0);
    for (ll i = 1; i <= n * k; ++i) cin >> v[i];
    sort(all(v));

    ll x, y, z;
    ll i = 0, j = n;
    if (n & 1) {
        z = n + 1;
        x = n / 2;
        y = n / 2 + 1;
    }
    else {
        z = n;
        y = n / 2 + 1;
        x = n / 2 - 1;
    }

    ll a = x;
    ll b = y;

    ll ans = 0;

    while (n * k - b >= a) {
        ans += v[v.size() - b];
        b += y;
        a += x;
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

    for (int i = 0; i < t; ++i)
        solve();
}
