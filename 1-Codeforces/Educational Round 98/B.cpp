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
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (auto &it : v) cin >> it, sum += it;
    sort(all(v));

    ll key = (sum + n - 2) / (n - 1);

    for (int i = 1; i < n; ++i)
        if (v[i] < key) {
            ll val = min(v[0], key - v[i]);
            v[0] -= val;
            v[i] += val;
        }
    sort(all(v));
    ll ans=0;
    for(int i=n-2; i>0; --i) ans+= v[n-1]-v[i];
    cout<<ans<<endl;

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
