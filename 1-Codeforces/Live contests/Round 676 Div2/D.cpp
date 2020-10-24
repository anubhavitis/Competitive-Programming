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
    int x, y;
    cin >> x >> y ;

    vi c(6);
    for (auto &it : c) cin >> it;

    for (int i = 0; i < 6; ++i) c[i] = min(c[i], c[(i + 5) % 6] + c[(i + 1) % 6]);
    int ans = 0;

    if (x * y > 0) {
        if (x < 0) {
            x = -x, y = -y;
            int m = min(x, y);
            x -= m, y -= m;
            ans = m * c[3] + x * c[2] + y * c[4];
        }
        else {
            int m = min(x, y);
            x -= m, y -= m;
            ans = m * c[0] + x * c[5] + y * c[1];
        }
    }
    else {
        if (x > 0)  ans += x * c[5];
        else        ans += -x * c[2];
        
        if (y > 0)  ans += y * c[1];
        else        ans += -y * c[4];
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