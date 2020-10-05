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

	for (int i = 0; i < n / 2; ++i) {
		for (int j = 0; j < m / 2; ++j) {
			vector<int> temp;
			temp.pb(arr[i][j]);
			temp.pb(arr[n - 1 - i][j]);
			temp.pb(arr[i][m - 1 - j]);
			temp.pb(arr[n - 1 - i][m - 1 - j]);
			sort(all(temp));

			int anstemp = INF;
			for (int i = 0; i < 4; ++i) {
				int ansmain = 0;
				for (int j = 0; j < 4; ++j)
					ansmain += abs(temp[j] - temp[i]);
				anstemp = min(anstemp, ansmain);
			}
			ans += anstemp;
		}
	}

	if (n & 1) {
		int x = n / 2;
		for (int j = 0; j < m / 2; ++j)
			ans += abs(arr[x][j] - arr[x][m - 1 - j]);
	}
	if (m & 1) {
		int x = m / 2;
		for (int j = 0; j < n / 2; ++j)
			ans += abs(arr[j][x] - arr[n - 1 - j][x]);
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