// //Mark XXX
// #include<bits/stdc++.h>

// #define big(x)  greater<x>()
// #define int     long long
// #define mp      make_pair
// #define pb      push_back
// #define lb      lower_bound
// #define ub      upper_bound
// #define all(x)  x.begin(), x.end()

// #define IOS()         ios_base::sync_with_stdio(0);cin.tie(0);
// #define deb(x)        cerr<<#x<<" : "<<x<<"\n";
// #define deball(x)    for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
// #define rep(i,b,c)    for(i=b; i<c; ++i)
// #define rrep(i,b,c)   for(i=b; i>=c; --i)

// #define PI      3.14159265
// #define M       (int)1000000007
// #define LINF    LONG_MAX
// #define INF     INT_MAX

// using namespace std;

// Code begins from here!!

// int inv = 0, X = 0;

// void solve(void) {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (auto &it : arr) cin >> it;


// }


#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define f first
#define deb(x)        cerr<<#x<<" : "<<x<<"\n";
#define deball(x)    for(auto iit:x) cerr<<setw(4)<<iit; cerr<<endl;
#define s second
#define ll long long
#define forn(i, a, b) for(int i = (a); i <= (b); ++i)
#define forev(i, b, a) for(int i = (b); i >= (a); --i)
#define VAR(v, i) __typeof( i) v=(i)
#define forit(i, c) for(VAR(i, (c).begin()); i != (c).end(); ++i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define file(s) freopen(s".in","r",stdin); freopen(s".out","w",stdout);

using namespace std;

const int maxn = (int)5e6 + 100;
const int maxm = (int)1e6 + 100;
const int mod = (int)1e9 + 7;
const int P = (int) 1e6 + 7;
const double pi = acos(-1.0);

#define inf mod

typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> Vll;
typedef vector<pair<int, int> > vpii;
typedef vector<pair<ll, ll> > vpll;

int n, t[2][maxn], id = 1;
ll dp[2][30];
vi g[maxn];

void go(int v, int b = 29) {
    int l = t[0][v], r = t[1][v];
    if (l) go(l, b - 1);
    if (r) go(r, b - 1);
    if (!l || !r) return;
    ll res = 0;
    int ptr = 0;
    for (auto x : g[l]) {
        while (ptr < sz(g[r]) && g[r][ptr] < x) ptr++;
        res += ptr;
    }
    dp[0][b] += res;
    dp[1][b] += sz(g[l]) * 1ll * sz(g[r]) - res;
}

void add(int x, int pos) {
    int v = 0;
    forev(i, 29, 0) {
        int bit = ((x >> i) & 1);
        if (!t[bit][v]) t[bit][v] = id++;
        v = t[bit][v];
        g[v].pb(pos);
    }
}

void solve() {
    cin >> n;
    forn(i, 1, n) {
        int x;
        cin >> x;
        add(x, i);
    }
    // for (int i = 0; i < 31; ++i) {cerr << setw(4) << i << "::: "; deball(g[i]);}
    go(0);
    ll inv = 0;
    int res = 0;
    forn(i, 0, 29) {
        inv += min(dp[0][i], dp[1][i]);
        if (dp[1][i] < dp[0][i])
            res += (1 << i);
    }
    cout << inv << " " << res << endl;
}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("/home/zeddie/Documents/input.txt", "r", stdin);
    freopen("/home/zeddie/Documents/output.txt", "w", stdout);
    freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
    // IOS()
    int t = 1;
    // cin >> t;

    while (t--)
        solve();

}