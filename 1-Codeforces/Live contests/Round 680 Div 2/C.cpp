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

void solve() {
    ll p, q;
    cin >> p >> q;

    vector<pair<ll, ll> > pri;
    ll dup = q;
    for (ll i = 2; i * i <= q; ++i)
        if (q % i == 0) {
            ll cnt = 0;
            while (q % i == 0) {
                cnt++;
                q /= i;
            }
            pri.pb({i, cnt});
        }
    if (q > 1) pri.pb({q, 1});

    q = dup;
    ll ans = 1;
    for (auto [u, v] : pri) {
        ll cnt = 0;
        dup = p;
        while (dup % u == 0) cnt++, dup /= u;
        ll req = min(v - 1, cnt);
        dup = pow(u, cnt - req);
        ans = max(ans, p / dup);
    }

    cout << ans << "\n";

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