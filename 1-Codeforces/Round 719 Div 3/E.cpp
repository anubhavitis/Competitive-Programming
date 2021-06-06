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

ll check(string s, int n) {
	ll cnt = 0, ans = 0, temp = 0;

	for (int i = 0; i < n; ++i) {
		if (s[i] == '*') {
			ans += temp;
			cnt++;
			temp = 0;
		}
		else {
			temp += cnt;
		}
	}
	ans += temp;
	return ans;
}

void solve() {
	int n;
	string s;
	cin >> n >> s;

	vi ind;
	for (int i = 0; i < n; ++i)
		if (s[i] == '*') ind.pb(i);

	int m = ind.size();

	if (m <= 1) {
		cout << "0\n";
		return;
	}

	int mid = ind[m / 2];
	string s1 = s.substr(0, mid + 1);
	string s2 = s.substr(mid + 1);
	reverse(all(s2));
	
	cout << check(s1, s1.size()) + check(s2, s2.size()) << endl;

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

