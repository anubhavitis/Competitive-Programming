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
    cin >> n >> m;

    int arr[n][m], cnt = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j) {
            arr[i][j] = (s[j] - '0');
            if (arr[i][j]) cnt++;
        }
    }

    vvi ans;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m - 1; ++j) {
            if (arr[i][j] == 1 and arr[i][j + 1] == 1) {
                int x = i + 1, y = j;
                int x2 = i, y2 = j + 1;
                if (x < 0 or x == n or y < 0 or y == m or x2 < 0 or x2 == n or y2 < 0 or y2 == m) continue;

                ans.pb({i + 1, j + 1, x + 1, y + 1, x2 + 1, y2 + 1});
                arr[i][j] ^= 1;
                arr[x][y] ^= 1;
                arr[x2][y2] ^= 1;
            }
            else if (arr[i][j] == 1) {
                int x = i + 1, y = j;
                int x2 = i + 1, y2 = j + 1;
                if (x < 0 or x == n or y < 0 or y == m or x2 < 0 or x2 == n or y2 < 0 or y2 == m) continue;

                ans.pb({i + 1, j + 1, x + 1, y + 1, x2 + 1, y2 + 1});
                arr[i][j] ^= 1;
                arr[x][y] ^= 1;
                arr[x2][y2] ^= 1;
            }
        }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cerr << arr[i][j] << " ";
        cerr << endl;
    }
    deb(ans.size())

    for (int i = n - 1, j = 0; j < m - 1; ++j)
        if (arr[n - 1][j] == 1 and arr[n - 1][j + 1] == 1) {
            arr[n - 1][j] = 0;
            arr[n - 1][j + 1] ^= 1;


            ans.pb({i + 1, j + 1, i, j + 1, i, j + 2});
            ans.pb({i + 1, j + 2, i, j + 1, i, j + 2});
        }
        else if (arr[i][j] == 1) {
            arr[i][j] = 0;

            ans.pb({ i + 1, j + 1, i + 1, j + 2, i, j + 2});
            ans.pb({ i + 1, j + 1, i, j + 1, i, j + 2});
            ans.pb({ i + 1, j + 1, i, j + 1, i + 1, j + 2});
        }

    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < m; ++j) cerr << arr[i][j] << " ";
    //     cerr << endl;
    // }
    // deb(ans.size())

    for (int j = m - 1, i = 0; i < n - 1; ++i)
        if (arr[i][j] == 1 and arr[i + 1][j] == 1) {
            arr[i][j] = 0;
            arr[i + 1][j] ^= 1;


            ans.pb({i + 1, j + 1, i + 1, j, i + 2, j});
            ans.pb({i + 2, j + 1, i + 1, j, i + 2, j});
        }
        else if (arr[i][j] == 1) {
            arr[i][j] = 0;

            ans.pb({ i + 1, j + 1, i + 1, j, i + 2, j});
            ans.pb({ i + 1, j + 1, i + 2, j + 1, i + 2, j});
            ans.pb({ i + 1, j + 1, i + 1, j, i + 2, j + 1});
        }

    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < m; ++j) cerr << arr[i][j] << " ";
    //     cerr << endl;
    // }
    // deb(ans.size())

    int i = n - 1, j = m - 1;
    if (arr[i][j] == 1) {
        arr[i][j] ^= 1;
        ans.pb({i + 1, j + 1, i + 1, j, i, j});
        ans.pb({i + 1, j + 1, i, j + 1, i, j});
        ans.pb({i + 1, j + 1, i + 1, j, i, j + 1});
    }

    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < m; ++j) cerr << arr[i][j] << " ";
    //     cerr << endl;
    // }
    // deb(ans.size())

    cout << ans.size() << endl;
    for (auto it : ans) {
        for (auto jt : it) cout << jt << " ";
        cout << endl;
    }

    // cerr << n << " " << m << " " << ans.size() << endl;
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
