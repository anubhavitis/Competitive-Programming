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

int g(int n) {
	n = (n * (n + 1)) / 2;
	return n % M;
}

void solve(void) {
	string s;
	cin >> s;
	int n = s.size();
	int loc = pow(10, n);
	int ans = 0;

	vector<int> prod(1, 0);
	int b = 0;

	for (int i = 2; i < (n + 1); ++i) {
		int nn = 9 * b + (pow(10, n) - 1) / (9 * pow(10, n));
		prod.pb(nn);
	}
	deball(prod)
	for (int i = 0; i < n; ++i, loc /= 10) {
		int x = i, y = n - i - 1;
		int sum = (g(x) + g(y)) % M;
		deb(sum)
		int num = s[i] - '0';
		ans = (ans + (loc * sum) % M) % M;
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
	// cin >> t;

	while (t--)
		solve();

}