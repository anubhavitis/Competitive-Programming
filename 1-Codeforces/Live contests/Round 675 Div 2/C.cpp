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
#define deball(x)     for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
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

	vector<int> right, left;
	int l = 1, r = 0;

	for (int i = 0; i < n; ++i) {
		left.pb(l);
		l = (l * 10) % M;

		if (i) r = ((i * left[left.size() - 2]) + r) % M;
		right.pb(r);
	}
	reverse(all(right));
	reverse(all(left));

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		int x = (s[i] - '0');
		ans = (ans + x * g(i) * left[i]) % M;
		ans = (ans + x * right[i]) % M;
	}

	cout << ans << endl;
	///home/zeddie/.config/sublime-text-3/Packages/User/competitve_programming.sublime-build
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