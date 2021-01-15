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

ll power(ll x, ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)  res = (res * x) % M;
        y = y >> 1;
        x = (x * x) % M;
    }
    return res % M;
}

ll C(ll n, ll k, const vector <long long> &fact, const vector <long long> &inv) {
    if (k > n) return 0;
    ll multiply = (fact[n] * inv[k]) % M;
    multiply = (multiply * inv[n - k]) % M;
    return multiply;
}

void solve() {
    int n, y, ind ;
    cin >> n >> y >> ind;

    vector <ll> fact(n + 1, 1LL);
    vector <ll> inv(n + 1, 1LL);
    for (int i = 1; i <= n; ++i) {
        fact[i] = (fact[i - 1] * i) % M;
        inv[i] = power(fact[i], M - 2);
    }

    ll l = y - 1, r = n - y;
    ll cl = 0, cr = 0;

    ll l1 = 0, r1 = n;
    while (l1 < r1) {
        ll mid = (l1 + r1) / 2;

        if (mid <= ind) {
            if (mid != ind) cl++;
            l1 = mid + 1;
        }
        else {
            cr++;
            r1 = mid;
        }
    }

    ll f1 = C(l, cl, fact, inv);

    f1 = (f1 * fact[cl]) % M;
    if (cl > l) f1 = 0;

    ll f2 = C(r, cr, fact, inv);

    f2 = (f2 * fact[cr]) % M;
    if (cr > r) f2 = 0;

    ll ans = (f1 * f2) % M;
    ans = ( ans * fact[n - cl - cr - 1]) % M;

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
