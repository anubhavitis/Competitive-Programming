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
#define M               998244353
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

ll power(ll x, ll y, ll p)
{
    ll res = 1;

    x = x % p;

    if (x == 0) return 0;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

void solve() {
    int n, k;
    string a, b;
    cin >> n >> k >> a >> b;

    int arr[26] = {}, arr2[26] = {};

    for (char ch : a) arr[ch - 'a']++;
    for (char ch : b) arr2[ch - 'a']++;

    // deball(arr)
    // deball(arr2)
    int cnt = 0;
    for (int i = 0; i < 26; ++i) {
        if (arr[i] == arr2[i]) continue;
        if (arr[i] > arr2[i]) {
            int diff = arr[i] - arr2[i];
            if (diff % k) {
                cout << "NO\n";
                return;
            }
            cnt += diff / k;
        }
        if (arr[i] < arr2[i]) {
            int diff = arr2[i] - arr[i];
            if (diff % k or cnt < diff / k) {
                cout << "NO\n";
                return;
            }
            cnt -= diff / k;
        }
    }

    cout << "YES\n";
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
