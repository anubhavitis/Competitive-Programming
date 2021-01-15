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
int n, m;

void solve() {
    string s;
    ll c0, c1, h;
    cin >> n >> c0 >> c1 >> h >> s;
    // cerr << n << " " << c0 << " " << c1 << " " << h << " " << s << endl;
    ll cnt0 = 0, cnt1 = 0;
    for (auto it : s)
        if (it == '1') cnt1++;
        else cnt0++;

    if (c0 + h < c1) {
        // deb(1)
        cout << (c0 * n + h * cnt1) << endl;
    }
    else if (c1 + h < c0) {
        // deb(2)
        cout << (c1 * n + h * cnt0) << endl;
    }
    else {
        // deb(3)
        cout << (cnt1 * c1 + cnt0 * c0) << endl;
    }

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
