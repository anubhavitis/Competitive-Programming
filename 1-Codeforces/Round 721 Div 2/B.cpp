//Mark XXXIV
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
map<string, pair<int, int> > dp;

pi help(string s, int al, int bo, int cnt) {
	if (dp[s].F != 0 and dp[s].S != 0)  return dp[s];
	if (!cnt) return dp[s] = {0, 0};

	pi res = {INF, INF};
	for (int i = 0; i < s.size(); ++i)
		if (s[i] == '0') {
			s[i] = 1;
			pi nres;
			if (al) nres = help(s, 0, 1, cnt - 1);
			else nres = help(s, 1, 0, cnt - 1);
			s[i] = '0';

			res = min(res, nres);
		}

	if (al) res.F++;
	else res.S++;

	return res;
}

void solve() {
	int n;
	string s;
	cin >> n >> s;

	int cnt = 0;
	for (auto it : s) cnt += (it == '0');
		deb(cnt)
	if (!cnt) {
		cout << "DRAW\n";
		return;
	}

	auto [al, bo] = help(s, 1, 0, cnt);
	cerr << al << " " << bo << endl;
	if (al == bo) cout << "DRAW\n";
	else if (al > bo) cout << "BOB\n";
	else cout << "ALICE\n";
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

