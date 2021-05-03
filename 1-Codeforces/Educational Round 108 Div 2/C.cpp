//Mark XXXIV
#include<bits/stdc++.h>

#define int              long long
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
	vi univ(n), skill(n);

	for (auto &it : univ) cin >> it;
	for (auto &it : skill) cin >> it;

	set<int> st;
	for (auto it : univ) st.insert(it);

	int x = 1;
	unordered_map<int, int> mp;
	for (int i = 0 ; i < n ; i++)
		if (mp.find(univ[i]) == mp.end())
			mp[univ[i]] = x++;

	int sz = mp.size();

	vi adj[sz + 1];
	for (int i = 0 ; i < n ; i++)
		adj[mp[univ[i]]].pb(skill[i]);

	for (int i = 1 ; i <= sz ; i++) sort(all(adj[i]), big(int));

	for (int i = 1 ; i <= sz ; i++) {
		vi v = adj[i];
		int n1 = v.size();
		vi pref(n1);
		pref[0] = v[0];
		for (int i = 1 ; i < n1 ; i++) pref[i] += v[i] + pref[i - 1];
		adj[i] = pref;
	}

	vi dp(sz + 1);
	for (int i = 1 ; i <= sz ; i++) dp[i] = adj[i].size();

	int srt = 1;
	bool D = false;
	for (int i = 0 ; i < n ; i++) {
		int ans = 0;
		D = false;
		for (int i = 1 ; i <= sz ; i++) {
			if (srt > dp[i]) continue;
			if (dp[i] % srt == 0) ans += adj[i][dp[i] - 1];
			else {
				int m = dp[i] - (dp[i] % srt);
				ans += adj[i][m - 1];
			}
			D = true;
		}
		if (!D) {
			for (int j = i ; j < n ; j++) {
				cout << 0 << " ";
			}
			break;
		}
		++srt;
		cout << ans << " ";
	}

	cout << endl;
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

