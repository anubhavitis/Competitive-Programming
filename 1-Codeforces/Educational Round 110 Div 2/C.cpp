//Mark XXXIV
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
	string s;
	cin >> s;
	int pos0 = -1, pos1 = -1, n = s.size(), j = 0;
	ll ans = 0;

	for (int i = 0; i < n; ++i) {
		if (s[i] == '0') {
			if (pos0 > pos1) {
				if ((i - pos0 + 1) % 2 == 0) j = pos0 + 1;
			}
			else {
				if (pos1 != -1 && (i - pos1 + 1) % 2 != 0) j = pos1 + 1;
			}
			pos0 = i;
		}
		else if (s[i] == '1') {
			if (pos0 > pos1) {
				if ((i - pos0 + 1) % 2 != 0) j = pos0 + 1;
			}
			else {
				if (pos1 != -1 && (i - pos1 + 1) % 2 == 0) j = pos1 + 1;
			}
			pos1 = i;
		}
		ans += i - j + 1;
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

/*
				0 1 0 1 0 1
			0 1 1 0 0 0 1 1 0 0
				|       |				
				  |       |

			Ans1: 3, 3, 1, 3, 3 
			Ans0: 2, 2, 4, 2, 2

*/