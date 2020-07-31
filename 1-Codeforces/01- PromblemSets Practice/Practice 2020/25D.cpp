//Mark XXVII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define PI 3.14159265
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define deball(x) for(auto iit:x) cerr<<iit<<" ";cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i, j, n, m;
vector<int> dad;

int find(int node) {
	if (dad[node] == node) return node;
	return dad[node] = find(dad[node]);
}

void solve(void) {
	cin >> n;
	dad.assign(n + 1, 0);
	iota(all(dad), 0);
	vector< pair<int, int> > v;
	rep(i, 0, n-1) {
		int a, b;
		cin >> a >> b;
		if (find(a) == find(b)) v.pb(mp(a, b));
		else dad[find(a)] = find(b);
		// deball(dad)
	}
	set<int> s;
	rep(i, 1, n + 1) s.insert(find(i));

	cout << v.size() << endl;
	auto it = s.begin();
	rep(i, 0, v.size()) cout << v[i].first << " " << v[i].second << " " << *it << " " << *++it << endl;
}

int main()
{
	//Skipped in presense of online judge.
#ifndef ONLINE_JUDGE
	freopen("/home/zeddie/Documents/input.txt", "r", stdin);
	freopen("/home/zeddie/Documents/output.txt", "w", stdout);
	freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif

	IOS()
	ll t = 1;
	// cin >> t;
	while (t--)
		solve();
}