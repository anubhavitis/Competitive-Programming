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
vector<int> dad, cap, fil;

int find(int node) {
	if (dad[node] == node) return node;
	return dad[node] = find(dad[node]);
}

void add (int p, int x) {
	if (p > n) return;
	int val = min(cap[p] - fil[p], x);
	fil[p] += val;
	x -= val;
	if (fil[p] == cap[p]) dad[p] = p + 1;
	if (x) add(find(dad[p]), x);
}
void solve(void) {
	cin >> n;
	dad.assign(n + 2, 0);
	iota(all(dad), 0);
	cap.assign(n + 1, 0);
	fil.assign(n + 1, 0);

	rep(i, 1, n + 1) cin >> cap[i];
	cin >> m;
	while (m--) {
		int t;
		cin >> t;
		if (t == 1) {
			int p, x;
			cin >> p >> x;
			cerr<<p<<" "<<find(p)<<endl;
			add(find(p), x);
		}
		else {
			int k;
			cin >> k;
			cout << fil[k] << endl;
		}
	}

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