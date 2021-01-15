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
#define deball(x)     for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define rep(i,b,c)    for(i=b; i<c; ++i)
#define rrep(i,b,c)   for(i=b; i>=c; --i)

#define PI      3.14159265
#define M       (int)1000000007
#define LINF    LONG_MAX
#define INF     INT_MAX

using namespace std;

//Code begins from here!!


void solve(void) {
	int n, m;
	cin >> n >> m;

	vector< vector<int> > arr(n, vector<int> (m));
	for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin >> arr[i][j];

	int ans = 0;

	for (int i = 0; i < (n + 1) / 2; ++i) {
		for (int j = 0; j < (m + 1) / 2; ++j) {
			vector<int> temp;
			temp.pb(arr[i][j]);
			if (i != n - i - 1) temp.pb(arr[n - 1 - i][j]);
			if (j != m - j - 1) temp.pb(arr[i][m - 1 - j]);
			if (i != n - i - 1 and j != m - j - 1) temp.pb(arr[n - 1 - i][m - 1 - j]);

			int anstemp = INF;
			for (int it : temp) {
				int ansmain = 0;
				for (int jt : temp)	ansmain += abs(jt - it);
				anstemp = min(anstemp, ansmain);
			}
			ans += anstemp;
		}
	}

	cout << ans << endl;
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