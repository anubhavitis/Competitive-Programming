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
#define deball(x)    for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define rep(i,b,c)    for(i=b; i<c; ++i)
#define rrep(i,b,c)   for(i=b; i>=c; --i)

#define PI      3.14159265
#define M       998244353
#define LINF    LONG_MAX
#define INF     INT_MAX

using namespace std;

//Code begins from here!!

void solve(void) {
	int n;
	cin >> n;
	vector<int> alice(3, 0), bob(3, 0);
	for (auto &it : alice) cin >> it;
	for (auto &it : bob) cin >> it;

	int alimax = 0, alimin = INF;
	alimax = min(alice[0], bob[1]) + min(alice[1], bob[2]) + min(alice[2], bob[0]);

	vector< pair<int, int> > ops;
	ops.pb(mp(0, 0)); ops.pb(mp(0, 2));
	ops.pb(mp(1, 1)); ops.pb(mp(1, 0));
	ops.pb(mp(2, 2)); ops.pb(mp(2, 1));

	sort(all(ops));
	do {
		vector<int> ta = alice, tb = bob;
		for (auto it : ops) {
			int val = min(ta[it.first], tb[it.second]);
			ta[it.first] -= val;
			tb[it.second] -= val;
		}
		alimin = min(alimin, accumulate(all(ta), (int)0));
	} while (next_permutation(all(ops)));
	cout << alimin << " " << alimax << endl;
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
	// cin >> t;

	while (t--)
		solve();

}