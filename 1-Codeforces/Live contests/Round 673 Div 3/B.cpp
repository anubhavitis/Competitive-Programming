//Mark XXX
#include<bits/stdc++.h>

#define big(x)  greater<x>()
#define int     long long
#define mp      make_pair
#define pb      push_back
#define lb      lower_bound
#define ub      upper_bound
#define all(x)  x.begin(), x.end()

#define IOS()         ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)        cerr<<#x<<" : "<<x<<"\n";
#define debaint(x)    for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define rep(i,b,c)    for(i=b; i<c; ++i)
#define rrep(i,b,c)   for(i=b; i>=c; --i)

#define PI      3.14159265
#define M       998244353
#define LINF    LONG_MAX
#define INF     INT_MAX

using namespace std;

//Code begins from here!!

void solve(void) {
	int n, m;
	cin >> n >> m;
	vector< vector<int> > v(n, vector<int> (4));
	for (int i = 0; i < n; ++i) cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];

	if (m & 1) { cout << "NO" << endl; return; }

	for (auto it : v) {
		if (it[1] == it[2]) { cout << "YES\n"; return; }
	}
	cout << "NO\n";

}

signed main()
{

#ifndef ONLINE_JUDGE
	freopen("/home/zeddie/Documents/input.txt", "r", stdin);
	freopen("/home/zeddie/Documents/output.txt", "w", stdout);
	freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
	IOS()
	int t = 1;
	cin >> t;

	while (t--)
		solve();

}