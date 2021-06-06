//Mark XXXIV
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
#define vll				vector<ll>
#define pi              pair<int,int>
#define vpi             vector<pi>
#define F               first
#define S               second

// #define endl            "\n"
#define PI              3.14159265
// #define M               100000000
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

void solve() {
	int n;
	cin >> n;

	int arr[n][n];

	int x = 1;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			arr[i][j] = x;
			x += 2;
			if (x > n * n) x = 2;
		}

	bool ans = true;
	for (int i = 0; i < n and ans; ++i)
		for (int j = 0; j < n and ans; ++j) {
			if (i and abs(arr[i - 1][j] - arr[i][j]) == 1) ans = false;
			if (j and abs(arr[i][j - 1] - arr[i][j]) == 1) ans = false;
			if (i != n - 1 and abs(arr[i + 1][j] - arr[i][j]) == 1) ans = false;
			if (j != n - 1 and abs(arr[i][j + 1] - arr[i][j]) == 1) ans = false;
		}

	if (ans) {
		for (int i = 0; i < n and ans; ++i) {
			for (int j = 0; j < n and ans; ++j) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	else cout << "-1\n";
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

