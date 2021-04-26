//Mark XXXIV
#include<bits/stdc++.h>

#define ll              long long
#define mp              make_pair
#define pb              push_back
#define lb              lower_bound
#define ub              upper_bound
#define all(x)          x.begin(), x.end()
#define big(x)          greater<x>()

#define sp              fixed<<setprecision
#define vi              vector<int>
#define vvi             vector<vi>
#define pi              pair<int,int>
#define vpi             vector<pi>
#define F               first
#define S               second

#define endl            "\n"
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

vi p, c, lcp;

void rsort(vpi &temp) {
	int n = p.size();

	vi cnt(n), np(n), pos(n);

	for (auto it : temp) cnt[it.S]++;
	for (int i = 1; i < n; ++i) pos[i] = pos[i - 1] + cnt[i - 1];
	for (int i = 0; i < n; ++i) np[pos[temp[i].S]++] = i;

	cnt.assign(n, 0);
	pos.assign(n, 0);
	for (auto it : temp) cnt[it.F]++;
	for (int i = 1; i < n; ++i) pos[i] = pos[i - 1] + cnt[i - 1];
	for (int i = 0; i < n; ++i) p[pos[temp[np[i]].F]++] = np[i];
}

void getX(string &s, int &n) {

	p.assign(n, 0);
	c.assign(n, 0);

	{
		//k=0
		iota(all(p), 0);
		sort(all(p), [&](auto & a, auto & b) {
			return s[a] < s[b];
		});

		c[p[0]] = 0;

		for (int i = 1; i < n; ++i)
			if (s[p[i]] == s[p[i - 1]]) c[p[i]] = c[p[i - 1]];
			else c[p[i]] = c[p[i - 1]] + 1;
	}

	int k = 0;
	while ((1 << k) < n) {
		vpi temp(n);

		for (int i = 0; i < n; ++i) temp[i] = {c[i], c[(i + (1 << k)) % n]};

		iota(all(p), 0);
		rsort(temp);
		c[p[0]] = 0;

		for (int i = 1; i < n; ++i)
			if (temp[p[i]] == temp[p[i - 1]]) c[p[i]] = c[p[i - 1]];
			else c[p[i]] = 1 + c[p[i - 1]];
		k++;
	}

	return;
}

void getLCP(string &s, int &n) {
	lcp.assign(n, 0);
	int k = 0;

	// loop till n-1 becuase we have added $ at end of string s
	for (int i = 0; i < n - 1; ++i) {
		int pos = c[i], j = p[pos - 1];
		while (k < n and s[i + k] == s[j + k]) k++;
		lcp[pos] = k;
		k = max(0, k - 1);
	}

	return;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin  );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
	IOS()

	string s; cin >> s;
	s += 32;

	int n = s.size();
	getX(s, n);

	int q; cin >> q;
	vpi rr;
	for (int i = 0; i < q; ++i) {
		int x, y; cin >> x >> y;
		rr.pb({x - 1, y - 1});
	}

	
	// getLCP(s, n);

	// for (int i = 0; i < n; ++i) {
	// 	cout << lcp[i] << " " << p[i] << " " << s.substr(p[i]) << endl;
	// }

	return 0;
}

