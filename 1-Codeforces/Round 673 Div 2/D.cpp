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
	int n;
	cin >> n;
	vector<int> v(n + 1);
	int sum = 0;
	for (int i = 1; i <= n; ++i) cin >> v[i], sum += v[i];
	if (sum % n != 0) { cout << "-1\n"; return; }

	int cnt = 0; string ans;

	for (int i = 2; i <= n; ++i) {
		if (v[i] % i == 0) ans += to_string(i) + " 1 " + to_string(v[i] / i) + "\n";
		else cnt++, ans += "1 " + to_string(i) + " " + to_string(i - v[i] % i) + "\n"
			                   + to_string(i) + " 1 " + to_string(1 + v[i] / i) + "\n";
		cnt++;
	}
	for (int i = 2; i <= n; ++i, cnt++) ans += "1 " + to_string(i) + " " + to_string(sum / n) + "\n";
	cout << cnt << endl << ans << endl;
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